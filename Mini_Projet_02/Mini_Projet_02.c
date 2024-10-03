#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct contact{
    char nom[50];
    char numero[50];
    char email[50];
} ;

// contact contact[];
int ajouter()

{

    printf("entres le nome \t");
    scanf("%s", contact[n].nom);

    printf("entres le numero de personne ");
    scanf("%s", contact[n].numero);

    printf("entres e-mail \t");
    scanf("%s", contact[n].email);
    return n + 1;
}

void modifier(struct contact contact[], int n)
{

    int n, i;
    char nomreschercher[50];
    int trouve = 0;

    for (int i = 0; i < n; i++)
    {

        if (strcmp(nomreschercher[i], contact[i].nom) == 0)
        {

            nomreschercher[i] = contact[i].nom;

            printf(" la modification des information des contact esst  \t");

            printf(" modifier votre numero de telefon  \t");
            scanf(" %d", contact[i].numero);

            printf(" modifier votre numero de telefon  \t");
            scanf(" %d", contact[i].email);
        }
        else if (!trouve)
        {

            printf("le nom rechercher non exester ");
        }
    }
}

int supprime(struct contact contact[], int n)
{
    int i;
    char nomR[50];
    int trouve = 0;

    printf("entre le nom rechercher  ");
    scanf("%s", &nomR);

    for (int i = 0; i < n; i++)
    {

        if (strcmp(contact[i].nom, nomR[i]) == 0)
        {
            trouve = 1;

            for (int j = i; j < n - 1; j++)
            {
                contact[j] = contact[j + 1];
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

int afficher(struct contact contact[], int n)
{
    for (int i; i < n; i++)
    {

        printf("les information\t");

        printf("entres le nome %s\t", contact[i].nom);

        printf("entres le numero de personne %d", contact[i].numero);

        printf("entres e-mail %s\t", contact[i].email);
    }
}

int rechercher()
{
    int n;
    struct contact contact[n];

    int NR[50];
    int trouve = 0;

    printf("contact rechercher entres le nom ");
    scanf("%d", NR);

    for (int i = 0; i < n; i++)
    {

        if (strcmp(NR[i], contact[i].nom) == 0)
        {

            printf("entres le nome %s\t", contact[i].nom);

            printf("entres le numero de personne %d", contact[i].numero);

            printf("entres e-mail %s\t", contact[i].email);
        }
        else if (!trouve)
        {

            printf("le rechercher d'un contact n'exist pas ");
        }
    }
}

int main()
{
    struct contact contact;
    int choix;

    do
    {
        printf(" munu \n");
        printf("1- contact ajouter\n");
        printf("2- modification de contactes \n");
        printf("3- supprimes le contactes  \n");
        printf("4- affichage le contact ");
        printf("5- recherche ");
        printf("6- sorties \n");
        printf(" anderen ");
        scanf("%d", &choix);

        switch (choix)
        {
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
