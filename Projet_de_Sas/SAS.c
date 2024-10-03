#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//declaration
typedef struct {
    char nom[50];
    char prenom[50];
    char telephone[50];
    char email[50];
    int age;
    char status[30];
    int ID;
    int date;
} Reservation;

Reservation reservations[100];
int count = 0;
int currentID = 1;
//end declaration

void identifiant(char ID[])
{
    sprintf(ID, "%d", rand() % 9999);
}

int ajouter()
{
    int count = 1;
    int i;

    patient patients[100];
    reservation reservations[100];
    date dates[100];

    for (i = 0; i < count; i++)
    {

        Identifiant(reservations[i].ID);

        printf("Entrez le nom complet %d: ", i + 1);
        scanf("%s", patients[i].nomcomplete);

        printf("Entrez le numéro de téléphone %d: ", i + 1);
        scanf("%s", patients[i].telefone);

        printf("Entrez l'email %d: ", i + 1);
        scanf("%s", patients[i].email);

        printf("Entrez votre âge %d: ", i + 1);
        scanf("%d", &patients[i].age);

        printf("Entrez le status (validé, reporté, annulé, traité).%d: ", i + 1);
        scanf("%s", reservations[i].status);

        printf("Entrez la carte nationale %d: ", i + 1);
        scanf("%s", patients[i].CNI);

        printf("Entrez votre adresse %d: ", i + 1);
        scanf("%s", patients[i].adresse);

        printf("Entrez la date de réservation (jj/mm/aaaa): ");
        scanf("%d", &dates[i].date);

        printf("Votre ID est: %s\n", reservations[i].ID);
    }

    count++;
    return 0;
}

int modifier()
{
    int trouve = 0;
    for (int i = 0; i < count; i++)
    {
        if (reservation[i].ID == trouve)
        {

            trouve = 1;

            printf("modifierle status ");
            scanf("%s", reservation[count].status);

            printf("entrez la date de reservation dd/mm/yy :", i + 1);
            scanf("%d %d %d", date[i].tag, date[i].mount, date[i].jahre);

            return 1;
        }
        if (!trouve)
        {

            priontf("reservation no trouve pas ");
        }
    }
    return 0;
}

int supprimer()
{

    int trouve;

    for (int i = 0; i < count; i++)
    {

        if (reservation[i].ID == trouve || patient[i].nomcomplete == trouve)
        {
            trouve = 1;
            strcpy(reservation[i].status, "annule ");
            printf("reservation esst annuler \n ");

            return 1;
        }
        if (!trouve)
        {

            printf("ur ID code incorrect ou les information incorrect ");
        }
    }
    return 0;
}

int affichage()
{

    int trouve = 0;

    for (int i = 0; i < count; i++)
    {

        if (reservation[i].ID == trouve || patient[i].nomcomplete == trouve)
        {
            trouve = 1;

            printf(" nom complete : \t %s ", patient[i].nomcomplete);
            printf("ur age :\t %d", patient[i].age);
            printf(" la carte national   :  \t %d", patient[i].CNI);
            printf(" adresse mail   :  \t %d", patient[i].mail);
            printf(" satuts  : \t %d", reservation[i].status);
            printf(" ID : \t %d", reservation[i].ID);
            printf(" la date de reservation   : \t %d", reservation[i].date);

            break;
        }
        else if (reservation[i].ID != trouve || patient[i].nomcomplete != trouve)
        {

            printf(" aucune reservation trouveee ou les information incorrect ");
        }
    }
}

int statistique()
{

    int lasomme = 0;
    float moyeen;

    for (int = 0; i < count; i++)
    {

        lasomme = lasomme + reservation[count].age;
        moyeen = lasomme / count;
    }

    printf(" la somme esst %d", lasomme);
    printf(" le moyyen esst %d", moyeen);

    int nmbr1 = 0, nmbr2 = 0, nmbr3 = 0;

    for (int i = 0; i < count; i++)
    {

        if (nmbr1 <= 18)
        {
            for (int i = 0; i < count; i++)
            {
                if (reservations[i].age <= 18)
                {
                    nmbr1++;
                }
                else if (reservations[i].age >= 19 && reservations[i].age <= 35)
                {
                    nmbr2++;
                }
                else
                {
                    nmbr3++;
                }
            }
        }
    }

    int valide = 0, annule = 0, reporte = 0, traite = O;
    for (int = 0; i < count; i++)
    {

        if (strcmp(reservation[i].status, "valide") == 0)
            valide++;
        if (strcmp(reservation[i].status, "annule") == 0)
            annule++;
        if (strcmp(reservation[i].status, "traite") == 0)
            traite++;
        if (strcmp(reservation[i].status, "reporte ") == 0)
            reporte++;
    }

    printf("valide %d", valide);
    printf("annule  %d", valide);
    printf("traiter %d", valide);
    printf("reporter  %d", valide);
}

int main()
{
    int choix;

    do
    {
        printf(" munu \n");
        printf("1- ajouter patiuen \n");
        printf("2- modifier \n");
        printf("3- supreme  \n");
        printf("4- afficher \n");
        printf("5- statistique  ");
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
            supprimer();
            break;
        case 4:
            affichage();
            break;
        case 5:
            statistique();
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
