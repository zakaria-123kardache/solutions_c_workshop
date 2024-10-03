#include <stdio.h>
<<<<<<< HEAD
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
=======
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
>>>>>>> de0edd2d934f5b422e5eaa11ba71813b594459ef
    int trouve = 0;

    for (int i = 0; i < n; i++)
    {

<<<<<<< HEAD
        if (strcmp(nomreschercher[i], contact[i].nom) == 0)
        {

            nomreschercher[i] = contact[i].nom;
=======
        if (strcmp(nomreschercher[i], nom[i]) == 0)
        {

            nomreschercher[i] = nom[i];
>>>>>>> de0edd2d934f5b422e5eaa11ba71813b594459ef

            printf(" la modification des information des contact esst  \t");

            printf(" modifier votre numero de telefon  \t");
<<<<<<< HEAD
            scanf(" %d", contact[i].numero);

            printf(" modifier votre numero de telefon  \t");
            scanf(" %d", contact[i].email);
=======
            printf(" %d", &contacts[i].numero);

            printf(" modifier votre numero de telefon  \t");
            printf(" %d", &contacts[i].email);
>>>>>>> de0edd2d934f5b422e5eaa11ba71813b594459ef
        }
        else if (!trouve)
        {

            printf("le nom rechercher non exester ");
        }
    }
}

<<<<<<< HEAD
int supprime(struct contact contact[], int n)
{
    int i;
=======
int supprime()
{

    struct contact contacts[n];
>>>>>>> de0edd2d934f5b422e5eaa11ba71813b594459ef
    char nomR[50];
    int trouve = 0;

    printf("entre le nom rechercher  ");
    scanf("%s", &nomR);

    for (int i = 0; i < n; i++)
    {

<<<<<<< HEAD
        if (strcmp(contact[i].nom, nomR[i]) == 0)
=======
        if (strcmp(nom[i], nomR[i]) == 0)
>>>>>>> de0edd2d934f5b422e5eaa11ba71813b594459ef
        {
            trouve = 1;

            for (int j = i; j < n - 1; j++)
            {
<<<<<<< HEAD
                contact[j] = contact[j + 1];
=======
>>>>>>> de0edd2d934f5b422e5eaa11ba71813b594459ef
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

<<<<<<< HEAD
int afficher(struct contact contact[], int n)
{
    for (int i; i < n; i++)
    {

        printf("les information\t");

        printf("entres le nome %s\t", contact[i].nom);

        printf("entres le numero de personne %d", contact[i].numero);

        printf("entres e-mail %s\t", contact[i].email);
    }
=======
int afficher()
{

    struct contact contacts[n];

    printf("les information\t");

    printf("entres le nome %s\t", contacts[i].nom);

    printf("entres le numero de personne %d", contacts[i].numero);

    printf("entres e-mail %s\t", contacts[i].email);
>>>>>>> de0edd2d934f5b422e5eaa11ba71813b594459ef
}

int rechercher()
{
    int n;
<<<<<<< HEAD
    struct contact contact[n];
=======
    struct contact contacts[n];
>>>>>>> de0edd2d934f5b422e5eaa11ba71813b594459ef

    int NR[50];
    int trouve = 0;

    printf("contact rechercher entres le nom ");
    scanf("%d", NR);

<<<<<<< HEAD
    for (int i = 0; i < n; i++)
    {

        if (strcmp(NR[i], contact[i].nom) == 0)
        {

            printf("entres le nome %s\t", contact[i].nom);

            printf("entres le numero de personne %d", contact[i].numero);

            printf("entres e-mail %s\t", contact[i].email);
=======
    for (i = 0; i < n; i++)
    {

        if (strcmp(NR[i], nom[i]) == 0)
        {

            printf("entres le nome %s\t", contacts[i].nom);

            printf("entres le numero de personne %d", contacts[i].numero);

            printf("entres e-mail %s\t", contacts[i].email);
>>>>>>> de0edd2d934f5b422e5eaa11ba71813b594459ef
        }
        else if (!trouve)
        {

            printf("le rechercher d'un contact n'exist pas ");
        }
    }
}

<<<<<<< HEAD
int main()
{
    struct contact contact;
    int choix;

    do
    {
=======

int main() {
    int choix;
    
    do {
>>>>>>> de0edd2d934f5b422e5eaa11ba71813b594459ef
        printf(" munu \n");
        printf("1- contact ajouter\n");
        printf("2- modification de contactes \n");
        printf("3- supprimes le contactes  \n");
        printf("4- affichage le contact ");
        printf("5- recherche ");
        printf("6- sorties \n");
        printf(" anderen ");
        scanf("%d", &choix);
<<<<<<< HEAD

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

=======
        
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
    
>>>>>>> de0edd2d934f5b422e5eaa11ba71813b594459ef
    return 0;
}
