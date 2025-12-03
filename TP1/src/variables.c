#include <stdio.h>

int main() {

    // 1. Types entiers
    signed char c = -10;
    unsigned char uc = 200;

    signed short s = -32000;
    unsigned short us = 65000;

    signed int i = -100000;
    unsigned int ui = 3000000000U;

    signed long int li = -500000000;
    unsigned long int uli = 4000000000UL;

    signed long long int lli = -9000000000000000LL;
    unsigned long long int ulli = 18000000000000000ULL;

    // 2. Types flottants
    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.23456789012345L;

    // Affichage
    printf("=== Types entiers ===\n");
    printf("signed char        : %d\n", c);
    printf("unsigned char      : %u\n", uc);
    printf("signed short       : %d\n", s);
    printf("unsigned short     : %u\n", us);
    printf("signed int         : %d\n", i);
    printf("unsigned int       : %u\n", ui);
    printf("signed long int    : %ld\n", li);
    printf("unsigned long int  : %lu\n", uli);
    printf("signed long long int   : %lld\n", lli);
    printf("unsigned long long int : %llu\n", ulli);

    printf("\n=== Types flottants ===\n");
    printf("float        : %f\n", f);
    printf("double       : %lf\n", d);
    printf("long double  : %Lf\n", ld);

    return 0;
}
