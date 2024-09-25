#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delte, S1, S2;// S1 et S2 sont des solution 
    printf("Entrez le coefficients a : ");
    scanf("%f", &a);
    
     printf("entre  b :");
    scanf("%f", &b);
    
     printf("entre c :");
    scanf("%f", &c);
    
    delte = b*b - 4*a*c;

    if (delte > 0) {
        S1 = (-b + sqrt(delte)) / (2*a);
        S2 = (-b - sqrt(delte)) / (2*a);
        printf(" solutions S1 est : %.2f \n",S1);
        printf(" solutions S2 est  : %.2f \n",S2);
    } else if (delte == 0) {
        S1 = -b / (2*a);
        printf("il obtuni une solution unique : %.2f\n", S1);
    } else {
        printf("Pas de solution réelle.\n");
    }

    return 0;
}