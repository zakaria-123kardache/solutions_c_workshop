#include <stdio.h>

int main()
{
    float la;//largeur
    float LO; //ongueur
    float surf; // C'est la surface S

    printf("Donner la largeur : \n");
    scanf("%f",&la);
    printf("Donner le longueur : \n");
    scanf("%f",&LO);
    surf=LO*la;
    printf("La surface est :%.2f \n",surf);


    return 0;
}