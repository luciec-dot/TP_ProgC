#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Couleur {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

struct CouleurCount {
    struct Couleur c;
    int count;
};

int couleursEgales(struct Couleur a, struct Couleur b) {
    return a.r == b.r &&
           a.g == b.g &&
           a.b == b.b &&
           a.a == b.a;
}

int main() {
    const int N = 100;
    struct Couleur couleurs[N];
    struct CouleurCount distincts[N]; // au pire 100 couleurs toutes différentes
    int nbDistincts = 0;

    srand((unsigned int)time(NULL));

    // 1️⃣ Remplir le tableau de 100 couleurs
    for (int i = 0; i < N; i++) {
        couleurs[i].r = rand() % 256;
        couleurs[i].g = rand() % 256;
        couleurs[i].b = rand() % 256;
        couleurs[i].a = 0xFF; // alpha fixe à 255 pour l’exemple
    }

    // 2️⃣ Compter les couleurs distinctes
    for (int i = 0; i < N; i++) {
        int trouve = 0;

        // Chercher si la couleur existe déjà dans distincts
        for (int j = 0; j < nbDistincts; j++) {
            if (couleursEgales(couleurs[i], distincts[j].c)) {
                distincts[j].count++;
                trouve = 1;
                break;
            }
        }

        // Si elle n'existe pas, l'ajouter
        if (!trouve) {
            distincts[nbDistincts].c = couleurs[i];
            distincts[nbDistincts].count = 1;
            nbDistincts++;
        }
    }

    // 3️⃣ Affichage des couleurs distinctes et de leurs occurrences
    printf("Couleurs distinctes dans le tableau (%d elements) :\n\n", N);

    for (int i = 0; i < nbDistincts; i++) {
        struct Couleur c = distincts[i].c;
        printf("R=%02x G=%02x B=%02x A=%02x : %d\n",
               c.r, c.g, c.b, c.a,
               distincts[i].count);
    }

    return 0;
}
