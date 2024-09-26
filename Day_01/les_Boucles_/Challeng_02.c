#include <stdio.h>

int main() {
    int i,n, fact = 1; 

     
    printf(" entre un nmbr : ");
    scanf("%d", &n);

   
    for ( i = 1; i <= n; i++) {

        fact = fact * i;  
    }

    printf(" %d  %d\n", n, fact);

    return 0;
}