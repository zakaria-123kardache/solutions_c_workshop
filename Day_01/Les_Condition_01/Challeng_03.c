#include <stdio.h>
#include <stdlib.h> 

int main()
{
   int num1,num2,tripl,somme;
   printf("Donner moi la 1er valeurs entières number  1 :\n");
   scanf("%d", &num1);   

   printf("Donner moi la 2er valeurs entières number  2 :\n");
   scanf("%d", &num2);

   somme = num1 + num2;
   tripl = num1*3;
   
   if ( num1 == num2){
       printf("puisque les deux valeur sont egaux donc triple de leur somme. est : %d\n",tripl);
   }  else {
    printf(" donc la somme est :%d",somme);
   }

   return 0;
}