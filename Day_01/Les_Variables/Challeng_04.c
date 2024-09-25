int main()
{
    float ms;
    float kmh;


    printf("Donner la vitesse en km : \n");
    scanf("%f",&kmh);
    ms = kmh * 0.27778;
    printf("La reusultat est : %.2f",ms);

    return 0;
}