#include <stdio.h>

int zakaria(int x , int y) {
    if (x > y) {
        return y;
    } else {
        return x; 
    }
}

int main() {

    int min = zakaria(2, 3);

    printf("la max esst %d\n", min);  
    
    return 0;
}
