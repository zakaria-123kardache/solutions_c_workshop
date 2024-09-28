#include <stdio.h>

int main() {
    int n;
    int i, j;
    int vide;

    printf("entre : ");
    scanf("%d", &n);   

    int T[n];   

     
    printf("entre element dans le tableaux : ");


    for (i = 0; i < n; i++) {
        scanf("%d", &T[i]);
    }

    
    for (i = 0; i < n; i++) {

        for (j = i + 1; j < n; j++) {
            if (T[i] > T[j]) {

                vide = T[i];
                T[i] = T[j];
                T[j] = vide;
            }
        }
    }

     
    printf("Donc esst ;");
    for (i = 0; i < n; i++) {
        printf("%d ", T[i]);
    }

    return 0;
}
