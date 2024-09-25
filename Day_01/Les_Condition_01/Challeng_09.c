#include <stdio.h>

int main() {
    char caract;

    printf("entre un caracter qulqunc : ");
    scanf("%c", &caract);

    if ((caract <= 'z' && caract >= 'a') || (caract <= 'Z' && caract <= 'A')) 
    {
        if (caract <= 'Z' && caract >= 'A') {

            printf("le carracter esst majuscule");

        } else {

            printf("lme caracter esst minuscule");
        }

    } 

    return 0;
}