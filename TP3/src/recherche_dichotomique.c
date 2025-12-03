#include <stdio.h>

int main() {

    const int N = 100;
    int tab[N];
    int i;

    // Remplir le tableau croissant : ici 0 → 99
    for (i = 0; i < N; i++) {
        tab[i] = i;
    }

    // Affichage du tableau
    printf("=== Tableau trie ===\n");
    for (i = 0; i < N; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n\n");

    // Entier à rechercher
    int recherche;
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &recherche);

    // Variables pour la recherche dichotomique
    int debut = 0;
    int fin = N - 1;
    int trouve = 0;

    while (debut <= fin) {
        int milieu = (debut + fin) / 2;

        if (tab[milieu] == recherche) {
            trouve = 1;
            break;
        }
        else if (tab[milieu] < recherche) {
            debut = milieu + 1;
        }
        else {
            fin = milieu - 1;
        }
    }

    if (trouve)
        printf("Résultat : entier présent\n");
    else
        printf("Résultat : entier absent\n");

    return 0;
}
