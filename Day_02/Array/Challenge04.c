#include <stdio.h>
#include <math.h>

int main() {

    int n;
    int T[20];
    int max;
    int i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("T[%d] = ", i + 1);
        scanf("%d", &T[i]);
    }

    max = T[0];

    for ( i = 0; i < n; i++) {
        if (T[i] < max) {
            max = T[i];
        }
    }

    printf("le  max esst : %d", max);
    return 0;
}