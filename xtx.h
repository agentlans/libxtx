#ifndef _XTOX
#define _XTOX

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

float xtx_atof(const char* x, enum xtx_error* err);
int xtx_atoi(const char* x, enum xtx_error* err);
long xtx_atol(const char* x, enum xtx_error* err);
long long xtx_atoll(const char* x, enum xtx_error* err);
unsigned short xtx_atous(const char* x, enum xtx_error* err);
unsigned xtx_atou(const char* x, enum xtx_error* err);
unsigned long xtx_atoul(const char* x, enum xtx_error* err);
unsigned long long xtx_atoull(const char* x, enum xtx_error* err);
double xtx_atod(const char* x, enum xtx_error* err);
long double xtx_atold(const char* x, enum xtx_error* err);
char* xtx_ftoa(float x, enum xtx_error* err);
int xtx_ftoi(float x, enum xtx_error* err);
long xtx_ftol(float x, enum xtx_error* err);
long long xtx_ftoll(float x, enum xtx_error* err);
unsigned short xtx_ftous(float x, enum xtx_error* err);
unsigned xtx_ftou(float x, enum xtx_error* err);
unsigned long xtx_ftoul(float x, enum xtx_error* err);
unsigned long long xtx_ftoull(float x, enum xtx_error* err);
double xtx_ftod(float x, enum xtx_error* err);
long double xtx_ftold(float x, enum xtx_error* err);
char* xtx_itoa(int x, enum xtx_error* err);
float xtx_itof(int x, enum xtx_error* err);
long xtx_itol(int x, enum xtx_error* err);
long long xtx_itoll(int x, enum xtx_error* err);
unsigned short xtx_itous(int x, enum xtx_error* err);
unsigned xtx_itou(int x, enum xtx_error* err);
unsigned long xtx_itoul(int x, enum xtx_error* err);
unsigned long long xtx_itoull(int x, enum xtx_error* err);
double xtx_itod(int x, enum xtx_error* err);
long double xtx_itold(int x, enum xtx_error* err);
char* xtx_ltoa(long x, enum xtx_error* err);
float xtx_ltof(long x, enum xtx_error* err);
int xtx_ltoi(long x, enum xtx_error* err);
long long xtx_ltoll(long x, enum xtx_error* err);
unsigned short xtx_ltous(long x, enum xtx_error* err);
unsigned xtx_ltou(long x, enum xtx_error* err);
unsigned long xtx_ltoul(long x, enum xtx_error* err);
unsigned long long xtx_ltoull(long x, enum xtx_error* err);
double xtx_ltod(long x, enum xtx_error* err);
long double xtx_ltold(long x, enum xtx_error* err);
char* xtx_lltoa(long long x, enum xtx_error* err);
float xtx_lltof(long long x, enum xtx_error* err);
int xtx_lltoi(long long x, enum xtx_error* err);
long xtx_lltol(long long x, enum xtx_error* err);
unsigned short xtx_lltous(long long x, enum xtx_error* err);
unsigned xtx_lltou(long long x, enum xtx_error* err);
unsigned long xtx_lltoul(long long x, enum xtx_error* err);
unsigned long long xtx_lltoull(long long x, enum xtx_error* err);
double xtx_lltod(long long x, enum xtx_error* err);
long double xtx_lltold(long long x, enum xtx_error* err);
char* xtx_ustoa(unsigned short x, enum xtx_error* err);
float xtx_ustof(unsigned short x, enum xtx_error* err);
int xtx_ustoi(unsigned short x, enum xtx_error* err);
long xtx_ustol(unsigned short x, enum xtx_error* err);
long long xtx_ustoll(unsigned short x, enum xtx_error* err);
unsigned xtx_ustou(unsigned short x, enum xtx_error* err);
unsigned long xtx_ustoul(unsigned short x, enum xtx_error* err);
unsigned long long xtx_ustoull(unsigned short x, enum xtx_error* err);
double xtx_ustod(unsigned short x, enum xtx_error* err);
long double xtx_ustold(unsigned short x, enum xtx_error* err);
char* xtx_utoa(unsigned x, enum xtx_error* err);
float xtx_utof(unsigned x, enum xtx_error* err);
int xtx_utoi(unsigned x, enum xtx_error* err);
long xtx_utol(unsigned x, enum xtx_error* err);
long long xtx_utoll(unsigned x, enum xtx_error* err);
unsigned short xtx_utous(unsigned x, enum xtx_error* err);
unsigned long xtx_utoul(unsigned x, enum xtx_error* err);
unsigned long long xtx_utoull(unsigned x, enum xtx_error* err);
double xtx_utod(unsigned x, enum xtx_error* err);
long double xtx_utold(unsigned x, enum xtx_error* err);
char* xtx_ultoa(unsigned long x, enum xtx_error* err);
float xtx_ultof(unsigned long x, enum xtx_error* err);
int xtx_ultoi(unsigned long x, enum xtx_error* err);
long xtx_ultol(unsigned long x, enum xtx_error* err);
long long xtx_ultoll(unsigned long x, enum xtx_error* err);
unsigned short xtx_ultous(unsigned long x, enum xtx_error* err);
unsigned xtx_ultou(unsigned long x, enum xtx_error* err);
unsigned long long xtx_ultoull(unsigned long x, enum xtx_error* err);
double xtx_ultod(unsigned long x, enum xtx_error* err);
long double xtx_ultold(unsigned long x, enum xtx_error* err);
char* xtx_ulltoa(unsigned long long x, enum xtx_error* err);
float xtx_ulltof(unsigned long long x, enum xtx_error* err);
int xtx_ulltoi(unsigned long long x, enum xtx_error* err);
long xtx_ulltol(unsigned long long x, enum xtx_error* err);
long long xtx_ulltoll(unsigned long long x, enum xtx_error* err);
unsigned short xtx_ulltous(unsigned long long x, enum xtx_error* err);
unsigned xtx_ulltou(unsigned long long x, enum xtx_error* err);
unsigned long xtx_ulltoul(unsigned long long x, enum xtx_error* err);
double xtx_ulltod(unsigned long long x, enum xtx_error* err);
long double xtx_ulltold(unsigned long long x, enum xtx_error* err);
char* xtx_dtoa(double x, enum xtx_error* err);
float xtx_dtof(double x, enum xtx_error* err);
int xtx_dtoi(double x, enum xtx_error* err);
long xtx_dtol(double x, enum xtx_error* err);
long long xtx_dtoll(double x, enum xtx_error* err);
unsigned short xtx_dtous(double x, enum xtx_error* err);
unsigned xtx_dtou(double x, enum xtx_error* err);
unsigned long xtx_dtoul(double x, enum xtx_error* err);
unsigned long long xtx_dtoull(double x, enum xtx_error* err);
long double xtx_dtold(double x, enum xtx_error* err);
char* xtx_ldtoa(long double x, enum xtx_error* err);
float xtx_ldtof(long double x, enum xtx_error* err);
int xtx_ldtoi(long double x, enum xtx_error* err);
long xtx_ldtol(long double x, enum xtx_error* err);
long long xtx_ldtoll(long double x, enum xtx_error* err);
unsigned short xtx_ldtous(long double x, enum xtx_error* err);
unsigned xtx_ldtou(long double x, enum xtx_error* err);
unsigned long xtx_ldtoul(long double x, enum xtx_error* err);
unsigned long long xtx_ldtoull(long double x, enum xtx_error* err);
double xtx_ldtod(long double x, enum xtx_error* err);

#ifdef __cplusplus
}
#endif
#endif