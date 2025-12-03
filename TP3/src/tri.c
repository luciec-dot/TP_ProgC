#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    const int N = 100;
    int tab[N];
    int i, j;

    // Initialisation aléatoire
    srand(time(NULL));

    // Remplir le tableau
    for (i = 0; i < N; i++) {
        tab[i] = (rand() % 2001) - 1000; // valeurs aléatoires [-1000, +1000]
    }

    // Afficher tableau non trié
    printf("=== Tableau non trie ===\n");
    for (i = 0; i < N; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n\n");

    // ====================
    // TRI A BULLES (Bubble Sort)
    // ====================
    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - 1 - i; j++) {
            if (tab[j] > tab[j + 1]) {
                int tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
        }
    }

    // Affichage du tableau trié
    printf("=== Tableau trie croissant ===\n");
    for (i = 0; i < N; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
