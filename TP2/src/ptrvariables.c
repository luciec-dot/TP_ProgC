#include <stdio.h>

int main() {
    // Variables de base
    char c = 0x12;
    short s = 0x1234;
    int i = 0x12345678;
    long int li = 0x12345678L;
    long long int lli = 0x123456789ABCDEF0LL;
    float f = 2.0f;
    double d = 3.5;
    long double ld = 4.25L;

    // Pointeurs vers ces variables
    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pli = &li;
    long long int *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    // Unions pour voir la représentation binaire/hex des flottants
    union { float f; unsigned int u; } fu;
    union { double d; unsigned long long u; } du;
    union { long double ld; unsigned char bytes[sizeof(long double)]; } ldu;

    printf("===== AVANT MANIPULATION =====\n\n");

    fu.f = f;
    du.d = d;
    ldu.ld = ld;

    printf("c   : adresse = %p, valeur = %02x\n",
           (void*)pc, (unsigned char)c);

    printf("s   : adresse = %p, valeur = %04hx\n",
           (void*)ps, (unsigned short)s);

    printf("i   : adresse = %p, valeur = %08x\n",
           (void*)pi, (unsigned int)i);

    printf("li  : adresse = %p, valeur = %016lx\n",
           (void*)pli, (unsigned long)li);

    printf("lli : adresse = %p, valeur = %016llx\n",
           (void*)plli, (unsigned long long)lli);

    printf("f   : adresse = %p, valeur = %08x (bits de float)\n",
           (void*)pf, fu.u);

    printf("d   : adresse = %p, valeur = %016llx (bits de double)\n",
           (void*)pd, du.u);

    printf("ld  : adresse = %p, valeur (octets, big-endian) = ",
           (void*)pld);
    for (int k = (int)sizeof(long double) - 1; k >= 0; k--) {
        printf("%02x", ldu.bytes[k]);
    }
    printf("\n\n");

    /* ========================
       MANIPULATION VIA POINTEURS
       ======================== */

    *pc  = *pc + 1;        // +1
    *ps  = *ps - 1;        // -1
    *pi  = *pi - 1;        // -1 (comme dans l’exemple)
    *pli = *pli + 0x10;    // +0x10
    *plli = *plli ^ 0xFF;  // XOR avec 0xFF pour changer les derniers bits
    *pf  = 1.0f;           // changer la valeur de float
    *pd  = 1.5;            // changer la valeur de double
    *pld = 2.0L;           // changer long double

    fu.f = f;
    du.d = d;
    ldu.ld = ld;

    printf("===== APRES MANIPULATION =====\n\n");

    printf("c   : adresse = %p, valeur = %02x\n",
           (void*)pc, (unsigned char)c);

    printf("s   : adresse = %p, valeur = %04hx\n",
           (void*)ps, (unsigned short)s);

    printf("i   : adresse = %p, valeur = %08x\n",
           (void*)pi, (unsigned int)i);

    printf("li  : adresse = %p, valeur = %016lx\n",
           (void*)pli, (unsigned long)li);

    printf("lli : adresse = %p, valeur = %016llx\n",
           (void*)plli, (unsigned long long)lli);

    printf("f   : adresse = %p, valeur = %08x (bits de float)\n",
           (void*)pf, fu.u);

    printf("d   : adresse = %p, valeur = %016llx (bits de double)\n",
           (void*)pd, du.u);

    printf("ld  : adresse = %p, valeur (octets, big-endian) = ",
           (void*)pld);
    for (int k = (int)sizeof(long double) - 1; k >= 0; k--) {
        printf("%02x", ldu.bytes[k]);
    }
    printf("\n");

    return 0;
}
