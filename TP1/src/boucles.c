#include <stdio.h>

int main() {
    int compteur = 5; // tu peux tester d'autres valeurs (< 10)

    for (int i = 1; i <= compteur; i++) {       // lignes
        for (int j = 1; j <= i; j++) {          // colonnes

            if (i == 1) {
                printf("* ");
            }
            else if (i == 2) {
                printf("* ");
            }
            else if (i < compteur) {
                if (j == 1 || j == i) {
                    printf("* ");               // bordures
                } else {
                    printf("# ");               // intérieur
                }
            }
            else {
                printf("* ");                   // dernière ligne pleine
            }
        }
        printf("\n");
    }

    return 0;
}
