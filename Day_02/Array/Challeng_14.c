#include <stdio.h>

int main()
{
    int n;
    int i;
    int lasomme=0;
    float moy;


    printf("Donne  un nmbr qulqunc  (n e N ) : ");
    scanf("%d",&n);


    int T[n];

    for(i=0;i<n;i++){

        printf("entre la valeur %d : ",i+1);
        scanf("%d",&T[i]);

        lasomme=lasomme+T[i];
        moy=lasomme/n;
    }
    printf("la somme des elemnet esst : %d \n",lasomme);
    printf("Moyeen Essst :  %f",moy);

    return 0;
}