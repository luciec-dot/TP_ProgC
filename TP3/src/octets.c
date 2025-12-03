#include <stdio.h>

int main() {
    short s = 0x0203;
    int i = 0x01020304;
    long int li = 0x0102030405060708L;
    float f = 1.5f;
    double d = 3.141592653589793;
    long double ld = 2.718281828459045L;

    unsigned char *p;
    size_t k;

    // ----- short -----
    printf("Octets de short :\n");
    p = (unsigned char*)&s;
    for (k = 0; k < sizeof(short); k++) {
        printf(" %02x", p[k]);
    }
    printf("\n\n");

    // ----- int -----
    printf("Octets de int :\n");
    p = (unsigned char*)&i;
    for (k = 0; k < sizeof(int); k++) {
        printf(" %02x", p[k]);
    }
    printf("\n\n");

    // ----- long int -----
    printf("Octets de long int :\n");
    p = (unsigned char*)&li;
    for (k = 0; k < sizeof(long int); k++) {
        printf(" %02x", p[k]);
    }
    printf("\n\n");

    // ----- float -----
    printf("Octets de float :\n");
    p = (unsigned char*)&f;
    for (k = 0; k < sizeof(float); k++) {
        printf(" %02x", p[k]);
    }
    printf("\n\n");

    // ----- double -----
    printf("Octets de double :\n");
    p = (unsigned char*)&d;
    for (k = 0; k < sizeof(double); k++) {
        printf(" %02x", p[k]);
    }
    printf("\n\n");

    // ----- long double -----
    printf("Octets de long double :\n");
    p = (unsigned char*)&ld;
    for (k = 0; k < sizeof(long double); k++) {
        printf(" %02x", p[k]);
    }
    printf("\n");

    return 0;
}
