#include <stdio.h>

void afficherBinaire(int nombre) {
    printf("Nombre = %d -> binaire : ", nombre);

    // Affichage sur 32 bits
    for (int i = 31; i >= 0; i--) {
        int bit = (nombre >> i) & 1;
        printf("%d", bit);

        // Optionnel : regrouper par 4 bits pour lisibilité
        if (i % 4 == 0) printf(" ");
    }
    printf("\n");
}

int main() {
    int test1 = 0;
    int test2 = 4096;
    int test3 = 65536;
    int test4 = 65535;
    int test5 = 1024;

    afficherBinaire(test1);
    afficherBinaire(test2);
    afficherBinaire(test3);
    afficherBinaire(test4);
    afficherBinaire(test5);

    return 0;
}
