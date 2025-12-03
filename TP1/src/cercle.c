#include <stdio.h>
#include <math.h>   // pour M_PI

int main() {
    double rayon;
    double aire, perimetre;

    // Définir le rayon (vous pouvez modifier la valeur)
    rayon = 5.0;

    // Calculs
    aire = M_PI * rayon * rayon;
    perimetre = 2 * M_PI * rayon;

    // Affichage des résultats
    printf("Rayon du cercle : %.2f\n", rayon);
    printf("Aire du cercle : %.4f\n", aire);
    printf("Perimetre du cercle : %.4f\n", perimetre);

    return 0;
}

