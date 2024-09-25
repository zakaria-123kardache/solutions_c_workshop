#include <stdio.h>

int main() {
    float moyenne;
    printf("le Moyen de Eudient ques que napples Naruto Esst : "); // Naruto est un etudiant dans 2 anne bac SM
    scanf("%f", &moyenne);

    if (moyenne < 10) {
        printf("Recale");
    } else if (moyenne >= 10 && moyenne < 12) {
        printf(" passabl");
    } else if (moyenne >= 12 && moyenne < 14) {
        printf("asse bien");
    } else if (moyenne >= 14 && moyenne < 16) {
        printf("bien");
    } else {
        printf("Tres bien");
    }

    return 0;
}