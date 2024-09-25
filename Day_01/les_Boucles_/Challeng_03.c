#include <stdio.h>
#include <math.h>

int main() {
    int n, lasomme = 0;
    printf("Entre un nmbr: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        lasomme += i;
    }

    printf("La somme des %d premiers nombres = %d\n", n, lasomme);

    return 0;
}
