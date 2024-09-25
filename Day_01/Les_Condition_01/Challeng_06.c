#include <stdio.h>

int main() {
    int num;
    
    printf("Entre un nmbr : ");
    scanf("%d", &num);

    if (num > 0) {

        printf("Le nombre est positif.\n");

    } else if (num < 0) {

        printf("Le nmbr est negativ\n");
    } else {
        printf("Le nmbr estt nul egal 0\n");
    }

    return 0;
}
