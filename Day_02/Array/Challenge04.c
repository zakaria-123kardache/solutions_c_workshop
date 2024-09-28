#include <stdio.h>
#include <math.h>

int main() {

    int n ; 
    int T[n] ,i; 
    int max ; 


   printf("affichage esst : %d", n);
   scanf("%d",&n); 



   for ( i ; i < n ; i ++ ){
    
   printf("affichage esst : %d",i ++);
   scanf("%d",T[i]); 

 }
    

   printf("le max esst  : "); 

   for ( i ; i < n ; i ++ ){

    if ( T[i] > max ){

        max == T[i];
    }
   printf("affichage esst : %d", max);
   

 }

}
