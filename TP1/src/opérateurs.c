#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    // Opérateurs arithmétiques
    int addition = a + b;
    int soustraction = a - b;
    int multiplication = a * b;
    int division = a / b;       // division entière car a et b sont int
    int modulo = a % b;

    // Opérateurs de comparaison (résultat booléen 0 = faux, 1 = vrai)
    int egal = (a == b);
    int superieur = (a > b);

    // Affichage
    printf("a = %d, b = %d\n", a, b);
    printf("Addition       : %d\n", addition);
    printf("Soustraction   : %d\n", soustraction);
    printf("Multiplication : %d\n", multiplication);
    printf("Division       : %d\n", division);
    printf("Modulo         : %d\n", modulo);

    printf("\n=== Comparaisons ===\n");
    printf("a == b ? %d\n", egal);
    printf("a > b  ? %d\n", superieur);

    return 0;
}
