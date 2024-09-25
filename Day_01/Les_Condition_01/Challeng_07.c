#include <stdio.h>

int main() {
    char caract;
    printf("Entre un caractere : ");
    scanf("%c", &caract);

     
    if ((caract <= 'z' && caract >= 'a') || (caract <= 'Z' && caract >= 'A')) {
         
        if (caract <= 'Z' && caract >= 'A') {
            printf("caracter essst majuscule");
        } else {
            printf("caracter esst  minuscule");
        }
    }  

    return 0;
}
