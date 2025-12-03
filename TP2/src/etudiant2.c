#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[30];
    char prenom[30];
    char adresse[80];
    float noteC;
    float noteSE;
};

int main() {

    // Tableau de 5 étudiant.e.s
    struct Etudiant etudiants[5];

    // 1️⃣ Initialisation des données
    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20 Boulevard Niels Bohr, Lyon");
    etudiants[0].noteC = 16.5;
    etudiants[0].noteSE = 12.1;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22 Boulevard Niels Bohr, Lyon");
    etudiants[1].noteC = 14.0;
    etudiants[1].noteSE = 14.1;

    strcpy(etudiants[2].nom, "Kamara");
    strcpy(etudiants[2].prenom, "Fatou");
    strcpy(etudiants[2].adresse, "2 Rue de la République, Paris");
    etudiants[2].noteC = 17.2;
    etudiants[2].noteSE = 15.5;

    strcpy(etudiants[3].nom, "Lopez");
    strcpy(etudiants[3].prenom, "Diego");
    strcpy(etudiants[3].adresse, "13 Avenue du Louvre, Paris");
    etudiants[3].noteC = 10.0;
    etudiants[3].noteSE = 9.8;

    strcpy(etudiants[4].nom, "Nguyen");
    strcpy(etudiants[4].prenom, "Linh");
    strcpy(etudiants[4].adresse, "5 Rue Victor Hugo, Marseille");
    etudiants[4].noteC = 15.8;
    etudiants[4].noteSE = 16.0;

    // 2️⃣ Affichage des données
    printf("===== DONNEES DES ETUDIANT.E.S =====\n\n");

    for(int i = 0; i < 5; i++) {
        printf("Etudiant.e %d :\n", i + 1);
        printf("Nom     : %s\n", etudiants[i].nom);
        printf("Prenom  : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note Programmation C      : %.2f\n", etudiants[i].noteC);
        printf("Note Systeme d'exploitation : %.2f\n\n", etudiants[i].noteSE);
    }

    return 0;
}
