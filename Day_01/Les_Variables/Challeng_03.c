#include <stdio.h>

int main()
{
    float km,Yards;


    printf("Donner la distance en kilomètres : \n");
    scanf("%f",&km);

    Yards = km * 1093.61;

    printf("la transforme en yards : %.2f",Yards);

    return 0;
}