#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    const int N = 10;  // taille des tableaux

    int tabI[N];
    float tabF[N];

    // Pointeurs pour parcourir les tableaux
    int *pI = tabI;
    float *pF = tabF;

    // Initialisation graine aléatoire
    srand(time(NULL));

    /* ============================
       1️⃣ Remplissage aléatoire
       ============================ */
    for (int i = 0; i < N; i++) {
        *(pI + i) = rand() % 100;        // entier 0 à 99
        *(pF + i) = (float)(rand() % 100) / 10.0f;  // flottant ex: 0.0 → 9.9
    }

    /* ============================
       2️⃣ Affichage "AVANT"
       ============================ */
    printf("=== Tableau d'entiers AVANT ===\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", *(pI + i));
    }
    printf("\n\n");

    printf("=== Tableau de floats AVANT ===\n");
    for (int i = 0; i < N; i++) {
        printf("%.2f ", *(pF + i));
    }
    printf("\n\n");


    /* ============================
       3️⃣ Modification indices pairs
          (i % 2 == 0)
       ============================ */
    for (int i = 0; i < N; i++) {

        if (i % 2 == 0) {
            *(pI + i) = *(pI + i) * 3;
            *(pF + i) = *(pF + i) * 3.0f;
        }
    }


    /* ============================
       4️⃣ Affichage "APRÈS"
       ============================ */
    printf("=== Tableau d'entiers APRÈS ===\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", *(pI + i));
    }
    printf("\n\n");

    printf("=== Tableau de floats APRÈS ===\n");
    for (int i = 0; i < N; i++) {
        printf("%.2f ", *(pF + i));
    }
    printf("\n");

    return 0;
}
