#include <stdio.h>

int main()
{

    int a;
    int n;
    printf("Donner le nombre des chifre n=  ");
    scanf("%d", &n);
    int T[n];

    printf("Donner le fcteur : ");
    scanf("%d", &a);

    for (int i = 0; i < n; i++)
    {
        printf("donner la valeur des nmbres T[%d]=  ", i);
        scanf("%d", &T[i]);
    }
    

    for (int i = 0; i< n; i++) {
        printf("T[%d] = %d\n",i, T[i]);
    }
    for(int i=0;i<n;i++) {
        T[i] *= a;
        printf("la valeur de facteur de nombre est T[%d]= %d \n",i,T[i]);
    }

    return 0;
}