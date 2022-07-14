#ifndef __TEMPLATES
#define __TEMPLATES

#include <cstdlib>
#include <string>
#include <cstring>
#include <boost/lexical_cast.hpp>
#include <boost/numeric/conversion/cast.hpp>

#include "xtx.h"

#define FLAG(x) if (err) *err = x
#define RETURNT return T()

// Tries to cast string x to type T
template <class T>
T lexcast(const char* x, xtx_error* err) {
    try {
        FLAG(XTX_OK);
        return boost::lexical_cast<T>(x);
    } catch (const boost::bad_lexical_cast &) {
        // Couldn't cast string to type T
        FLAG(XTX_BAD);
        RETURNT;
    } catch (...) { // some unknown error
        FLAG(XTX_UNKNOWN);
        RETURNT;
    }
}

// Tries to cast type T to string. The string must be free'd.
template <class T>
char* lexcast(T x, xtx_error* err) {
    std::string s = boost::lexical_cast<std::string>(x);
    int n = s.size();
    // Need a C pointer on the heap
    char* cstr = (char*) calloc(n+1, 1);
    memmove(cstr, s.c_str(), n); // make copy
    return cstr;
}

// Cast from number type to number type

using boost::numeric_cast;
using boost::numeric::bad_numeric_cast;
using boost::numeric::positive_overflow;
using boost::numeric::negative_overflow;

// Casts value of type U to type T.
// If T is integer and U is some floating type, then
//    x will be truncated to int.
template <class T, class U>
T numcast(U x, xtx_error* err) {
    try {
        FLAG(XTX_OK);
        T out = numeric_cast<T>(x);
        return out;
    } catch (negative_overflow& e) {
        FLAG(XTX_NEG_OVERFLOW);
        RETURNT;
    } catch (positive_overflow& e) {
        FLAG(XTX_POS_OVERFLOW);
        RETURNT;
    } catch (bad_numeric_cast& e) {
        FLAG(XTX_BAD);
        RETURNT;
    } catch (...) {
        FLAG(XTX_UNKNOWN);
        RETURNT;
    }
}

#endif
