#include <stdio.h>

int main()
{
    float r;
    float const Pi=3.14;
    float Volume;

    printf("Donner moi ton  rayon r : \n");
    scanf("%f",&r);

    Volume = (4/3) * Pi * pow(r,3);

    printf("Le Volume est :%.2f \n",Volume);


    return 0;
}