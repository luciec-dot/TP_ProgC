#include <stdio.h>

int main() {
    int num1 = 16;
    int num2 = 3;
    char op = '&';   // Teste différentes valeurs: + - * / % & | ~

    int resultat; // pour les opérations binaires
    float result_float; // pour la division

    switch (op) {

        case '+':
            resultat = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, resultat);
            break;

        case '-':
            resultat = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, resultat);
            break;

        case '*':
            resultat = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, resultat);
            break;

        case '/':
            if (num2 != 0) {
                result_float = (float)num1 / num2;
                printf("%d / %d = %.2f\n", num1, num2, result_float);
            } else {
                printf("Erreur : division par zero.\n");
            }
            break;

        case '%':
            if (num2 != 0) {
                resultat = num1 % num2;
                printf("%d %% %d = %d\n", num1, num2, resultat);
            } else {
                printf("Erreur : modulo par zero.\n");
            }
            break;

        // Opérations bit à bit
        case '&':
            resultat = num1 & num2;
            printf("%d & %d = %d\n", num1, num2, resultat);
            break;

        case '|':
            resultat = num1 | num2;
            printf("%d | %d = %d\n", num1, num2, resultat);
            break;

        case '~':
            resultat = ~num1;
            printf("~%d = %d\n", num1, resultat);
            break;

        default:
            printf("Operateur inconnu : %c\n", op);
            break;
    }

    return 0;
}
