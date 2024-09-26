#include <stdio.h>

int main() {
    int n, i, nmbr = 2;

    
    printf("Donner  un nmbr (n e N) : ");
    scanf("%d", &n);

    printf("les 1er nmbr pair sont:%d", n);

    
    for (i = 1; i <= n; i++) {

        printf("%d ", nmbr);

        nmbr = nmbr + 2;  
         }


    return 0;
}