#include <stdio.h>

int main() {

    // Tableau de 10 phrases
    const char phrases[10][100] = {
        "Bonjour, comment ca va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journee.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent etre deroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est interessante.",
        "Les structures de donnees sont importantes.",
        "Programmer en C, c'est genial."
    };

    // Phrase à rechercher (modifiez pour tester)
    const char recherche[100] = "La programmation en C est amusante.";

    int trouve = 0;  // flag
    int i, j;

    // ---- Recherche ----
    for (i = 0; i < 10; i++) {

        j = 0;

        // Comparaison caractère par caractère
        while (phrases[i][j] != '\0' && recherche[j] != '\0') {

            if (phrases[i][j] != recherche[j]) {
                break;  // différence → phrase différente
            }
            j++;
        }

        // Si les deux chaînes terminent en même temps → match parfait
        if (phrases[i][j] == '\0' && recherche[j] == '\0') {
            trouve = 1;
            break;
        }
    }

    // ---- Résultat ----
    if (trouve) {
        printf("Phrase trouvee.\n");
    } else {
        printf("Phrase non trouvee.\n");
    }

    return 0;
}
