#include <stdio.h>
#include <string.h>

struct contact
{

    char nom[50];
    int numero[50];
    char email[50];
};

int ajouter()
{
    int n;
    int i;
    printf("entres le snombres des personne qui peut ajouter");
    scanf("%d", &n);

    struct contact contacts[n];

    printf("entres le nome \t");
    scanf("%d", &contacts[i].nom);

    printf("entres le numero de personne ");
    scanf("%d", &contacts[i].numero);
    printf("entres e-mail \t");
    scanf("%d", &contacts[i].email);
}

int modifier()
{

    struct contact contacts[n];
    int n, i;
    int nomreschercher[50];
    int trouve = 0;

    for (int i = 0; i < n; i++)
    {

        if (strcmp(nomreschercher[i], nom[i]) == 0)
        {

            nomreschercher[i] = nom[i];

            printf(" la modification des information des contact esst  \t");

            printf(" modifier votre numero de telefon  \t");
            printf(" %d", &contacts[i].numero);

            printf(" modifier votre numero de telefon  \t");
            printf(" %d", &contacts[i].email);
        }
        else if (!trouve)
        {

            printf("le nom rechercher non exester ");
        }
    }
}

int supprime()
{

    struct contact contacts[n];
    char nomR[50];
    int trouve = 0;

    printf("entre le nom rechercher  ");
    scanf("%s", &nomR);

    for (int i = 0; i < n; i++)
    {

        if (strcmp(nom[i], nomR[i]) == 0)
        {
            trouve = 1;

            for (int j = i; j < n - 1; j++)
            {
            }
            n--;
            printf("le contact est bein supprimies <%s>.\n", nomR);
            break;
        }
    }

    if (!trouve)
    {
        printf("le nom nexiste pas dans le contact  %s \n", nomR);
    }
}

int afficher()
{

    struct contact contacts[n];

    printf("les information\t");

    printf("entres le nome %s\t", contacts[i].nom);

    printf("entres le numero de personne %d", contacts[i].numero);

    printf("entres e-mail %s\t", contacts[i].email);
}

int rechercher()
{
    int n;
    struct contact contacts[n];

    int NR[50];
    int trouve = 0;

    printf("contact rechercher entres le nom ");
    scanf("%d", NR);

    for (i = 0; i < n; i++)
    {

        if (strcmp(NR[i], nom[i]) == 0)
        {

            printf("entres le nome %s\t", contacts[i].nom);

            printf("entres le numero de personne %d", contacts[i].numero);

            printf("entres e-mail %s\t", contacts[i].email);
        }
        else if (!trouve)
        {

            printf("le rechercher d'un contact n'exist pas ");
        }
    }
}


int main() {
    int choix;
    
    do {
        printf(" munu \n");
        printf("1- contact ajouter\n");
        printf("2- modification de contactes \n");
        printf("3- supprimes le contactes  \n");
        printf("4- affichage le contact ");
        printf("5- recherche ");
        printf("6- sorties \n");
        printf(" anderen ");
        scanf("%d", &choix);
        
        switch (choix) {
            case 1:
                ajouter();
                break;
            case 2:
                 modifier();
                break;
            case 3:
                supprime();
                break;
            case 4:
                supprime();
                break;
            case 5:
                afficher();
                break;
            case 6:
                printf("sorties de cette programm \n");
                break;
            default:
                printf("chois ne pas correct \n");
        }
    } while (choix != 6);
    
    return 0;
}
