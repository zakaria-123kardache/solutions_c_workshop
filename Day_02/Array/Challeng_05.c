#include <stdio.h>
#include <math.h>

int main() {

    int n;
    int T[20];
    int min;
    int i;

    printf("entre des element de tableaux : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        printf("T[%d] = ", i + 1);
        scanf("%d", &T[i]);
    }

    min = T[0];

    for (int i = 0; i < n; i++) {
        if (T[i] < min) {
            min = T[i];
        }
    }

    printf(" le min esst : %d\n", min);
    return 0;
}