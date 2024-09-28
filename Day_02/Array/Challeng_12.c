#include <stdio.h>


int main()
{
    int n;
    int i;

    printf("Donneee nmbr  (n e N) : ");
    scanf("%d",&n);

    int T[n];

    for(i=0;i<n;i++){

        printf("entre la valeur %d : ",i+1);
        scanf("%d",&T[i]);
     }

     for(i=0;i<n;i++){

        if(T[i]%2!=0){
            printf("les valeur %d : \n",T[i]);
        }
     }

 
}