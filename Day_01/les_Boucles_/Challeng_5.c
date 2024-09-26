#include <stdio.h>

int main() {


    
    int i,base, expo;
    int RF= 1;  // c'est la result finalm 

    
    printf("Donner moi la base: ");
    scanf("%d", &base);


    printf("Donner  exposant: ");
    scanf("%d", &expo);

    
    for ( i = 1; i <= expo; i++) {
        
        RF = RF * base;  
    }

    printf("%d^%d = %d\n", base, expo, RF);





    return 0;
}
