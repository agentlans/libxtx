
#include "xtx_templates.hpp"
#include "xtx.h"
float xtx_atof(const char* x, enum xtx_error* err) {
    return lexcast<float>(x, err);
}
int xtx_atoi(const char* x, enum xtx_error* err) {
    return lexcast<int>(x, err);
}
long xtx_atol(const char* x, enum xtx_error* err) {
    return lexcast<long>(x, err);
}
long long xtx_atoll(const char* x, enum xtx_error* err) {
    return lexcast<long long>(x, err);
}
unsigned short xtx_atous(const char* x, enum xtx_error* err) {
    return lexcast<unsigned short>(x, err);
}
unsigned xtx_atou(const char* x, enum xtx_error* err) {
    return lexcast<unsigned>(x, err);
}
unsigned long xtx_atoul(const char* x, enum xtx_error* err) {
    return lexcast<unsigned long>(x, err);
}
unsigned long long xtx_atoull(const char* x, enum xtx_error* err) {
    return lexcast<unsigned long long>(x, err);
}
double xtx_atod(const char* x, enum xtx_error* err) {
    return lexcast<double>(x, err);
}
long double xtx_atold(const char* x, enum xtx_error* err) {
    return lexcast<long double>(x, err);
}
char* xtx_ftoa(float x, enum xtx_error* err) {
    return lexcast(x, err);
}
int xtx_ftoi(float x, enum xtx_error* err) {
    return numcast<float,int>(x, err);
}
long xtx_ftol(float x, enum xtx_error* err) {
    return numcast<float,long>(x, err);
}
long long xtx_ftoll(float x, enum xtx_error* err) {
    return numcast<float,long long>(x, err);
}
unsigned short xtx_ftous(float x, enum xtx_error* err) {
    return numcast<float,unsigned short>(x, err);
}
unsigned xtx_ftou(float x, enum xtx_error* err) {
    return numcast<float,unsigned>(x, err);
}
unsigned long xtx_ftoul(float x, enum xtx_error* err) {
    return numcast<float,unsigned long>(x, err);
}
unsigned long long xtx_ftoull(float x, enum xtx_error* err) {
    return numcast<float,unsigned long long>(x, err);
}
double xtx_ftod(float x, enum xtx_error* err) {
    return numcast<float,double>(x, err);
}
long double xtx_ftold(float x, enum xtx_error* err) {
    return numcast<float,long double>(x, err);
}
char* xtx_itoa(int x, enum xtx_error* err) {
    return lexcast(x, err);
}
float xtx_itof(int x, enum xtx_error* err) {
    return numcast<int,float>(x, err);
}
long xtx_itol(int x, enum xtx_error* err) {
    return numcast<int,long>(x, err);
}
long long xtx_itoll(int x, enum xtx_error* err) {
    return numcast<int,long long>(x, err);
}
unsigned short xtx_itous(int x, enum xtx_error* err) {
    return numcast<int,unsigned short>(x, err);
}
unsigned xtx_itou(int x, enum xtx_error* err) {
    return numcast<int,unsigned>(x, err);
}
unsigned long xtx_itoul(int x, enum xtx_error* err) {
    return numcast<int,unsigned long>(x, err);
}
unsigned long long xtx_itoull(int x, enum xtx_error* err) {
    return numcast<int,unsigned long long>(x, err);
}
double xtx_itod(int x, enum xtx_error* err) {
    return numcast<int,double>(x, err);
}
long double xtx_itold(int x, enum xtx_error* err) {
    return numcast<int,long double>(x, err);
}
char* xtx_ltoa(long x, enum xtx_error* err) {
    return lexcast(x, err);
}
float xtx_ltof(long x, enum xtx_error* err) {
    return numcast<long,float>(x, err);
}
int xtx_ltoi(long x, enum xtx_error* err) {
    return numcast<long,int>(x, err);
}
long long xtx_ltoll(long x, enum xtx_error* err) {
    return numcast<long,long long>(x, err);
}
unsigned short xtx_ltous(long x, enum xtx_error* err) {
    return numcast<long,unsigned short>(x, err);
}
unsigned xtx_ltou(long x, enum xtx_error* err) {
    return numcast<long,unsigned>(x, err);
}
unsigned long xtx_ltoul(long x, enum xtx_error* err) {
    return numcast<long,unsigned long>(x, err);
}
unsigned long long xtx_ltoull(long x, enum xtx_error* err) {
    return numcast<long,unsigned long long>(x, err);
}
double xtx_ltod(long x, enum xtx_error* err) {
    return numcast<long,double>(x, err);
}
long double xtx_ltold(long x, enum xtx_error* err) {
    return numcast<long,long double>(x, err);
}
char* xtx_lltoa(long long x, enum xtx_error* err) {
    return lexcast(x, err);
}
float xtx_lltof(long long x, enum xtx_error* err) {
    return numcast<long long,float>(x, err);
}
int xtx_lltoi(long long x, enum xtx_error* err) {
    return numcast<long long,int>(x, err);
}
long xtx_lltol(long long x, enum xtx_error* err) {
    return numcast<long long,long>(x, err);
}
unsigned short xtx_lltous(long long x, enum xtx_error* err) {
    return numcast<long long,unsigned short>(x, err);
}
unsigned xtx_lltou(long long x, enum xtx_error* err) {
    return numcast<long long,unsigned>(x, err);
}
unsigned long xtx_lltoul(long long x, enum xtx_error* err) {
    return numcast<long long,unsigned long>(x, err);
}
unsigned long long xtx_lltoull(long long x, enum xtx_error* err) {
    return numcast<long long,unsigned long long>(x, err);
}
double xtx_lltod(long long x, enum xtx_error* err) {
    return numcast<long long,double>(x, err);
}
long double xtx_lltold(long long x, enum xtx_error* err) {
    return numcast<long long,long double>(x, err);
}
char* xtx_ustoa(unsigned short x, enum xtx_error* err) {
    return lexcast(x, err);
}
float xtx_ustof(unsigned short x, enum xtx_error* err) {
    return numcast<unsigned short,float>(x, err);
}
int xtx_ustoi(unsigned short x, enum xtx_error* err) {
    return numcast<unsigned short,int>(x, err);
}
long xtx_ustol(unsigned short x, enum xtx_error* err) {
    return numcast<unsigned short,long>(x, err);
}
long long xtx_ustoll(unsigned short x, enum xtx_error* err) {
    return numcast<unsigned short,long long>(x, err);
}
unsigned xtx_ustou(unsigned short x, enum xtx_error* err) {
    return numcast<unsigned short,unsigned>(x, err);
}
unsigned long xtx_ustoul(unsigned short x, enum xtx_error* err) {
    return numcast<unsigned short,unsigned long>(x, err);
}
unsigned long long xtx_ustoull(unsigned short x, enum xtx_error* err) {
    return numcast<unsigned short,unsigned long long>(x, err);
}
double xtx_ustod(unsigned short x, enum xtx_error* err) {
    return numcast<unsigned short,double>(x, err);
}
long double xtx_ustold(unsigned short x, enum xtx_error* err) {
    return numcast<unsigned short,long double>(x, err);
}
char* xtx_utoa(unsigned x, enum xtx_error* err) {
    return lexcast(x, err);
}
float xtx_utof(unsigned x, enum xtx_error* err) {
    return numcast<unsigned,float>(x, err);
}
int xtx_utoi(unsigned x, enum xtx_error* err) {
    return numcast<unsigned,int>(x, err);
}
long xtx_utol(unsigned x, enum xtx_error* err) {
    return numcast<unsigned,long>(x, err);
}
long long xtx_utoll(unsigned x, enum xtx_error* err) {
    return numcast<unsigned,long long>(x, err);
}
unsigned short xtx_utous(unsigned x, enum xtx_error* err) {
    return numcast<unsigned,unsigned short>(x, err);
}
unsigned long xtx_utoul(unsigned x, enum xtx_error* err) {
    return numcast<unsigned,unsigned long>(x, err);
}
unsigned long long xtx_utoull(unsigned x, enum xtx_error* err) {
    return numcast<unsigned,unsigned long long>(x, err);
}
double xtx_utod(unsigned x, enum xtx_error* err) {
    return numcast<unsigned,double>(x, err);
}
long double xtx_utold(unsigned x, enum xtx_error* err) {
    return numcast<unsigned,long double>(x, err);
}
char* xtx_ultoa(unsigned long x, enum xtx_error* err) {
    return lexcast(x, err);
}
float xtx_ultof(unsigned long x, enum xtx_error* err) {
    return numcast<unsigned long,float>(x, err);
}
int xtx_ultoi(unsigned long x, enum xtx_error* err) {
    return numcast<unsigned long,int>(x, err);
}
long xtx_ultol(unsigned long x, enum xtx_error* err) {
    return numcast<unsigned long,long>(x, err);
}
long long xtx_ultoll(unsigned long x, enum xtx_error* err) {
    return numcast<unsigned long,long long>(x, err);
}
unsigned short xtx_ultous(unsigned long x, enum xtx_error* err) {
    return numcast<unsigned long,unsigned short>(x, err);
}
unsigned xtx_ultou(unsigned long x, enum xtx_error* err) {
    return numcast<unsigned long,unsigned>(x, err);
}
unsigned long long xtx_ultoull(unsigned long x, enum xtx_error* err) {
    return numcast<unsigned long,unsigned long long>(x, err);
}
double xtx_ultod(unsigned long x, enum xtx_error* err) {
    return numcast<unsigned long,double>(x, err);
}
long double xtx_ultold(unsigned long x, enum xtx_error* err) {
    return numcast<unsigned long,long double>(x, err);
}
char* xtx_ulltoa(unsigned long long x, enum xtx_error* err) {
    return lexcast(x, err);
}
float xtx_ulltof(unsigned long long x, enum xtx_error* err) {
    return numcast<unsigned long long,float>(x, err);
}
int xtx_ulltoi(unsigned long long x, enum xtx_error* err) {
    return numcast<unsigned long long,int>(x, err);
}
long xtx_ulltol(unsigned long long x, enum xtx_error* err) {
    return numcast<unsigned long long,long>(x, err);
}
long long xtx_ulltoll(unsigned long long x, enum xtx_error* err) {
    return numcast<unsigned long long,long long>(x, err);
}
unsigned short xtx_ulltous(unsigned long long x, enum xtx_error* err) {
    return numcast<unsigned long long,unsigned short>(x, err);
}
unsigned xtx_ulltou(unsigned long long x, enum xtx_error* err) {
    return numcast<unsigned long long,unsigned>(x, err);
}
unsigned long xtx_ulltoul(unsigned long long x, enum xtx_error* err) {
    return numcast<unsigned long long,unsigned long>(x, err);
}
double xtx_ulltod(unsigned long long x, enum xtx_error* err) {
    return numcast<unsigned long long,double>(x, err);
}
long double xtx_ulltold(unsigned long long x, enum xtx_error* err) {
    return numcast<unsigned long long,long double>(x, err);
}
char* xtx_dtoa(double x, enum xtx_error* err) {
    return lexcast(x, err);
}
float xtx_dtof(double x, enum xtx_error* err) {
    return numcast<double,float>(x, err);
}
int xtx_dtoi(double x, enum xtx_error* err) {
    return numcast<double,int>(x, err);
}
long xtx_dtol(double x, enum xtx_error* err) {
    return numcast<double,long>(x, err);
}
long long xtx_dtoll(double x, enum xtx_error* err) {
    return numcast<double,long long>(x, err);
}
unsigned short xtx_dtous(double x, enum xtx_error* err) {
    return numcast<double,unsigned short>(x, err);
}
unsigned xtx_dtou(double x, enum xtx_error* err) {
    return numcast<double,unsigned>(x, err);
}
unsigned long xtx_dtoul(double x, enum xtx_error* err) {
    return numcast<double,unsigned long>(x, err);
}
unsigned long long xtx_dtoull(double x, enum xtx_error* err) {
    return numcast<double,unsigned long long>(x, err);
}
long double xtx_dtold(double x, enum xtx_error* err) {
    return numcast<double,long double>(x, err);
}
char* xtx_ldtoa(long double x, enum xtx_error* err) {
    return lexcast(x, err);
}
float xtx_ldtof(long double x, enum xtx_error* err) {
    return numcast<long double,float>(x, err);
}
int xtx_ldtoi(long double x, enum xtx_error* err) {
    return numcast<long double,int>(x, err);
}
long xtx_ldtol(long double x, enum xtx_error* err) {
    return numcast<long double,long>(x, err);
}
long long xtx_ldtoll(long double x, enum xtx_error* err) {
    return numcast<long double,long long>(x, err);
}
unsigned short xtx_ldtous(long double x, enum xtx_error* err) {
    return numcast<long double,unsigned short>(x, err);
}
unsigned xtx_ldtou(long double x, enum xtx_error* err) {
    return numcast<long double,unsigned>(x, err);
}
unsigned long xtx_ldtoul(long double x, enum xtx_error* err) {
    return numcast<long double,unsigned long>(x, err);
}
unsigned long long xtx_ldtoull(long double x, enum xtx_error* err) {
    return numcast<long double,unsigned long long>(x, err);
}
double xtx_ldtod(long double x, enum xtx_error* err) {
    return numcast<long double,double>(x, err);
}
