#include <stdio.h>
#include <math.h>

int main() {
    int T[] = {1,2,3,4,5};
    int size = sizeof(T)/sizeof(T[0]);
    int i; 

    for (i ; i < size ;i++){

        printf("la fichachge esst : %d",T[i]);
    }

    return 0;
}
