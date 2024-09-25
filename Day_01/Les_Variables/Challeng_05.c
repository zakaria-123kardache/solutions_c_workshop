#include <stdio.h>

int main()
{
    float C;


    printf("Donner la temperature C : \n");
    scanf("%f",&C);
    if(C<0){
        printf("Solide \n");
    }
    if(C<0){
        printf("Solide \n");
    }
    if(C>=0 && C<100){
        printf("Liquide \n");
    }
    if(C>=100){
        printf("Gaz \n");
    }
    return 0;
}