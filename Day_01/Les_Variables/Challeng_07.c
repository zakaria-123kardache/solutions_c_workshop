#include <stdio.h>
int main()
{
    float A;
    float B;
    float C;
    float M; //M : C'st la Moyen ponderee


    printf("Donner Le premier nombre A : \n");
    scanf("%f",&A);
    printf("Donner Le deuxième nombre B : \n");
    scanf("%f",&B);
    printf("Donner Le troisième nombre B : \n");
    scanf("%f",&C);
    M=(A*2+B*3+C*5)/3;
    printf("La moyenne de cette nombre est :%.2f \n",M);


    return 0;
}