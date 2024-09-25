#include <stdio.h>
#include <stdlib.h> 
int main()
{
    float A;
    float B;
    float C;
    float MG; // c'est la moyen general 


    printf("Donner Le premier nombre A : \n");
    scanf("%f",&A);
    printf("Donner Le deuxième nombre B : \n");
    scanf("%f",&B);
    printf("Donner Le troisième nombre C : \n");
    scanf("%f",&C);
    MG=pow((A*B*C),(1.0/3.0)); // 
    printf("La moyenne geometrie de cette nombres est :%.2f \n",MG);


    return 0;
}