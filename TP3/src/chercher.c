#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    const int N = 100;
    int tab[N];
    int recherche;
    int i;
    int trouve = 0;

    srand(time(NULL));

    // Remplir le tableau avec des valeurs aléatoires entre 0 et 100
    for (i = 0; i < N; i++) {
        tab[i] = rand() % 101;
    }

    // Affichage du tableau
    printf("=== Tableau ===\n");
    for (i = 0; i < N; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n\n");

    // Demande à l'utilisateur
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &recherche);

    // Recherche linéaire
    for (i = 0; i < N; i++) {
        if (tab[i] == recherche) {
            trouve = 1;
            break;
        }
    }

    if (trouve) {
        printf("Résultat : entier présent\n");
    } else {
        printf("Résultat : entier absent\n");
    }

    return 0;
}
