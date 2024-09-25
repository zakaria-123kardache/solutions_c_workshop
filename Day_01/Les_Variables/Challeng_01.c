#include <stdio.h>

int main() {

    char nom [50], prenom[50],sexe[50],mail[50];
    int age;
    
    printf("Donne moi ton nom");
    scanf("%s",&nom);

    printf("Donne moi ton prenom");
    scanf("%s",&prenom);

    printf("Donne moi ton Sexe");
    scanf("%s",&sexe);

    printf("Donne moi ton Age");
    scanf("%d",&age);

    printf("Donne moi ton E-mail");
    scanf("%s",&mail);

    printf("ton nom est : %c",nom);
    printf("ton prenom est : %d",nom);
    printf("ton age est : %c",nom);
    printf("ton E-mail est : %c",nom);
    printf("ton sexe est : %c",nom);




    return 0;
}