#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int tab[100];
    int i;

    // Initialiser la graine aléatoire
    srand(time(NULL));

    // Remplissage du tableau avec des valeurs entre 1 et 1000
    for (i = 0; i < 100; i++) {
        tab[i] = (rand() % 1000) + 1;
    }

    // Initialisation des valeurs min et max
    int min = tab[0];
    int max = tab[0];

    // Recherche du min et max
    for (i = 1; i < 100; i++) {
        if (tab[i] < min)
            min = tab[i];
        if (tab[i] > max)
            max = tab[i];
    }

    printf("Le numero le plus petit est : %d\n", min);
    printf("Le numero le plus grand est : %d\n", max);

    return 0;
}
