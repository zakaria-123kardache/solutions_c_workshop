#include <stdio.h>
#include <math.h>

int main()
{
    float x1,y1,z1; // x et y et z son des pt
    float x2,y2,z2;
    float Distance; // la distance entre deux pt 

    printf("Donner le point x1 : \n");
    scanf("%f",&x1);
    printf("Donner le point x2 : \n");
    scanf("%f",&x2);
    printf("Donner le point y1 : \n");
    scanf("%f",&y1);
    printf("Donner le point y2 : \n");
    scanf("%f",&y2);
    printf("Donner le point z1 : \n");
    scanf("%f",&z1);
    printf("Donner le point z2 : \n");
    scanf("%f",&z2);

    Distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2)+pow((z2-z1),2));
    printf("La Distance est :%.2f \n",Distance);

 
    return 0;
}