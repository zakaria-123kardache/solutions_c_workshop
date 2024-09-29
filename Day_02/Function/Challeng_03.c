#include <stdio.h>

int zakaria(int x , int y) {
    if (x > y) {
        printf("%d", x);
    } else {
        printf("%d", y);
    }
}

int main() {

    int max = zakaria(2, 3);

    printf("la max esst %d\n", max);  
    
    return 0;
}
