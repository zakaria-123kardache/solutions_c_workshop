#include <stdio.h>

int main()
{
    int n, n1, n2, n3, n4;

    
    printf("Donner un nombre entier a 4 chiffre: \n");
    scanf("%d", &n);

    
    n1 = n % 10;     
    n = n / 10;     

    n2 = n % 10;      
    n = n / 10;       

    n3 = n % 10;     
    n = n / 10;      

    n4 = n % 10;  

     
    printf("inverse est: %d%d%d%d\n", n1, n2, n3, n4);

    return 0;
}
