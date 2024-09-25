#include <stdio.h>

int main()
{
    float A;
    float B;
    float S; 
    float M;
    float P;


    printf("Donner Le nombre A : \n");
    scanf("%f",&A);
    printf("Donner Le nombre B : \n");
    scanf("%f",&B);
    S=A+B;
    M=A-B;
    P=A*B;
    printf("A + B = %.2f : \n",S);
    printf("A - B = %.2f : \n",M);
    printf("A * B = %.2f : \n",P);
    if(B==0)
        printf("La division sur 0 impossible "); // car la division sur 0 7aram
    else
        printf("A / B = %f : \n",A/B);



    return 0;
}