#include <stdio.h>

int main() {

    char str1[50] = "Hello";
    char str2[50] = " World!";
    char copie[50];
    char concat[100];

    int i = 0;
    int len1 = 0;
    int len2 = 0;

    /* ==============================
       1️⃣ Calcul de la longueur
       ============================== */
    while (str1[len1] != '\0') {
        len1++;
    }

    while (str2[len2] != '\0') {
        len2++;
    }

    printf("Longueur de str1 : %d\n", len1);
    printf("Longueur de str2 : %d\n", len2);

    /* ==============================
       2️⃣ Copie de str1 → copie
       ============================== */
    for (i = 0; i <= len1; i++) {
        copie[i] = str1[i];  // on copie aussi le \0 à la fin
    }

    printf("Copie de str1 : %s\n", copie);

    /* ==============================
       3️⃣ Concaténation str1 + str2 → concat
       ============================== */

    // Étape 1 : copier str1 dans concat
    for (i = 0; i < len1; i++) {
        concat[i] = str1[i];
    }

    // Étape 2 : copier str2 à la suite
    for (int j = 0; j <= len2; j++) { // <= pour inclure \0
        concat[len1 + j] = str2[j];
    }

    printf("Concaténation : %s\n", concat);

    return 0;
}
