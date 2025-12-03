#include <stdio.h>

int main() {

    // 1️⃣ Déclaration des variables
    char nom[5][30] = {
        "Dupont", "Martin", "Kamara", "Lopez", "Nguyen"
    };
    
    char prenom[5][30] = {
        "Alice", "Hugo", "Fatou", "Diego", "Linh"
    };
    
    char adresse[5][50] = {
        "10 Rue de Paris",
        "25 Avenue des Champs",
        "5 Rue du Soleil",
        "88 Boulevard Montaigne",
        "3 Rue Victor Hugo"
    };

    float noteC[5] = {14.5, 11.0, 17.5, 9.0, 15.0};
    float noteSE[5] = {13.0, 12.5, 18.0, 8.0, 14.0};

    // 2️⃣ Affichage
    printf("===== LISTE DES ETUDIANTS =====\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d :\n", i + 1);
        printf("- Nom : %s\n", nom[i]);
        printf("- Prenom : %s\n", prenom[i]);
        printf("- Adresse : %s\n", adresse[i]);
        printf("- Note Programmation C : %.2f\n", noteC[i]);
        printf("- Note Systeme d'exploitation : %.2f\n\n", noteSE[i]);
    }

    return 0;
}
