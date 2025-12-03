#include <stdio.h>

int main() {
    int n = 5;      // hauteur de la pyramide
    int i, j;

    // Boucle sur chaque niveau de la pyramide
    for (i = 1; i <= n; i++) {

        // 1) Afficher les espaces pour centrer la ligne
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // 2) Afficher les nombres croissants : 1 2 3 ... i
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // 3) Afficher les nombres décroissants : i-1 ... 2 1
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        // Fin de ligne
        printf("\n");
    }

    printf("Generation de la pyramide terminee.\n");

    return 0;
}
