#include <stdio.h>
#include <stdlib.h> 

int main()
{
   char lettre;
   printf("Ecrire un caractère quelconque :\n");
   scanf("%c", &lettre);   

   switch ( lettre ){

    case'a': 
    printf("est un  voyells");
    break;

       case'o': 
    printf("est un  voyells");
    break;

       case'u': 
    printf("est un  voyells");
    break;

       case'e': 
    printf("est un  voyells");
    break;

       case'i': 
    printf("est un  voyells");
    break;

    default :
     printf("cest caracter nest pas voyels");
   }

   return 0;
}
