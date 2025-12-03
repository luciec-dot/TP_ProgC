#include <stdio.h>

int main() {

    unsigned int d = 0xF0001000; // Exemple — change la valeur pour tester

    // Position de départ (1 = le plus à gauche)
    int bit4_pos = 31 - (4 - 1);   // -> bit 28
    int bit20_pos = 31 - (20 - 1); // -> bit 12

    int bit4  = (d >> bit4_pos)  & 1;
    int bit20 = (d >> bit20_pos) & 1;

    int resultat = (bit4 == 1 && bit20 == 1) ? 1 : 0;

    printf("%d\n", resultat);

    return 0;
}
