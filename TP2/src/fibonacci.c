#include <stdio.h>

int main() {
    int n = 7;           // Nombre de termes à générer (modifiable)
    int i;
    int a = 0;          // U0
    int b = 1;          // U1
    int suivant;

    printf("Suite de Fibonacci jusqu'a U%d :\n", n);

    // Afficher les deux premiers termes
    printf("%d, %d", a, b);

    // Boucle pour générer les termes suivants
    for (i = 2; i <= n; i++) {
        suivant = a + b;
        printf(", %d", suivant);

        // Mise à jour des termes précédents
        a = b;
        b = suivant;
    }

    printf("\n");
    return 0;
}
