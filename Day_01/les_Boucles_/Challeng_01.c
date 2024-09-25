 #include <stdio.h>
 #include <math.h>

int main() {
    int nombre, i;
    printf("Entrez un nombre: ");
    scanf("%d", &nombre);

    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", nombre, i, nombre * i);
    }

    return 0;
}
