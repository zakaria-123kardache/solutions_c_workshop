#include <stdio.h>
#include <math.h>

int main() {
    int i, n, lasomme = 0;
    printf("Entre un nmbr: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
         lasomme = lasomme + i;
    }

    printf(" %d\n",lasomme);

    return 0;
}
