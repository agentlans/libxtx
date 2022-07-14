from string import Template

# Read a list of variable types
types = []
with open('Types.txt', 'r') as f:
    lines = [x.strip() for x in f.readlines()]
    for l in lines:
        parts = l.split(" ")
        # Parts of each variable entry
        initial = parts[0]
        full = " ".join(parts[1:])
        types.append((initial, full))

# Returns name of function that converts t1 to t2
def func_name(t1, t2):
    return "xtx_{}to{}".format(t1[0], t2[0])

def is_string_type(typ):
    return typ[0] == 'a'
    
apache = \
"""
/* Copyright 2022 Alan Tseng

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License. */
"""

# Returns the declaration of the functions
def func_decl(t1, t2):
    decl = Template(
"$t2 $fname($const$t1 x, enum xtx_error* err);")
    const = ""
    if is_string_type(t1):
        const = "const "
    return decl.substitute(const=const, t1=t1[1], t2=t2[1], fname=func_name(t1,t2))

# For function definitions...

# For converting string to number
def str_to_num(t1, t2):
    code = Template(
"""$ret $fname(const char* x, enum xtx_error* err) {
    return lexcast<$ret>(x, err);
}""")
    return code.substitute(ret=t2[1], fname=func_name(t1,t2))

# Number to string
def num_to_str(t1, t2):
    code = Template(
"""char* $fname($type x, enum xtx_error* err) {
    return lexcast(x, err);
}""")
    return code.substitute(type=t1[1], fname=func_name(t1,t2))

# Number to number
def num_to_num(t1, t2):
    code = Template(
"""$t2 $fname($t1 x, enum xtx_error* err) {
    return numcast<$t1,$t2>(x, err);
}""")
    return code.substitute(t1=t1[1], t2=t2[1], fname=func_name(t1,t2))


def write_line(file, str):
    file.write(str + "\n")

with open("xtx.cpp", "w") as body:
    with open("xtx.h", "w") as header:
        header.write(
"""#ifndef _XTOX
#define _XTOX
""")
        header.write(apache)

        header.write(
"""
#ifdef __cplusplus
extern "C" {
#endif

enum xtx_error {
    XTX_OK,
    XTX_BAD,
    XTX_NEG_OVERFLOW,
    XTX_POS_OVERFLOW,
    XTX_BAD_ALLOC,
    XTX_UNKNOWN
};

""")

        body.write("""
#include "xtx_templates.hpp"
#include "xtx.h"
""")
        # Write the body and headers
        for type1 in types:
            for type2 in types:
                if type1[0] == type2[0]:
                    continue
                # Print declaration
                write_line(header, func_decl(type1, type2))
                # Print definition
                if is_string_type(type1):
                    write_line(body, str_to_num(type1, type2))
                elif is_string_type(type2):
                    write_line(body, num_to_str(type1, type2))
                else:
                    write_line(body, num_to_num(type1, type2))
        header.write("""
#ifdef __cplusplus
}
#endif
#endif""")
