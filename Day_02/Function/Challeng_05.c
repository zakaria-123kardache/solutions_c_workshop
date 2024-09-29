#include <stdio.h>

int zakaria(int n , int fact ) 
{
     
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int RS = zakaria (5, 1) ;

    printf(" fact d'un nmbr esst  %d\n", RS);  
     
    return 0;
}
