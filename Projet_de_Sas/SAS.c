#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// declaration
typedef struct
{
    char nom[50];
    char prenom[50];
    char telephone[50];
    char email[50];
    int age;
    char status[30];
    int ID;
    char date[12];
} Reservation;

Reservation reservations[100];
int count = 0; 
int id = 1; 
// end declaration

int ajouterPredefinies()
{
    Reservation predefinies[] = {
        {"Dupont", "Jean", "0612345678", "jean.dupont@mail.com", 25, "valide", id++, "12-01-2024"},
        {"Martin", "Lucie", "0712345678", "lucie.martin@mail.com", 30, "reporte", id++, "22-03-2024"},
        {"Durand", "Pierre", "0611223344", "pierre.durand@mail.com", 40, "valide", id++, "05-04-2024"},
        {"Bernard", "Sophie", "0711223344", "sophie.bernard@mail.com", 20, "annule", id++, "16-05-2024"},
        {"Moreau", "Alice", "0622334455", "alice.moreau@mail.com", 35, "traite", id++, "19-06-2024"},
        {"Lefevre", "Marc", "0722334455", "marc.lefevre@mail.com", 22, "valide", id++, "25-07-2024"},
        {"Petit", "Marie", "0612341234", "marie.petit@mail.com", 28, "reporte", id++, "02-08-2024"},
        {"Simon", "Julie", "0712341234", "julie.simon@mail.com", 18, "annule", id++, "11-09-2024"},
        {"Rousseau", "Paul", "0622112233", "paul.rousseau@mail.com", 32, "traite", id++, "15-10-2024"},
        {"Girard", "Emilie", "0722112233", "emilie.girard@mail.com", 27, "valide", id++, "21-11-2024"},
        {"Blanc", "Alex", "0611221133", "alex.blanc@mail.com", 29, "reporte", id++, "30-12-2024"}};

    for (int i = 0; i < 11; i++)
    {
        reservations[count++] = predefinies[i];
    }

    printf("11 reservations predefinies ajoutees avec succes!\n");
    return 0;
}

int ajouter()
{
    Reservation reservation;
    // auto increment
    reservation.ID = id++;

    printf("Entrez le nom: ");
    scanf("%s", reservation.nom);

    printf("Entrez le prenom: ");
    scanf("%s", reservation.prenom);

    // Valider le nombre telephone
    int validPhone = 0;
    while (!validPhone)
    {
        printf("Entrez le numero de telephone (10 chiffreservation, commence par 06 ou 07): ");
        scanf("%s", reservation.telephone);

        // Check si le telephone est 10 chifres et commencer par 06 or 07
        if (strlen(reservation.telephone) == 10 && (reservation.telephone[0] == '0' && (reservation.telephone[1] == '6' || reservation.telephone[1] == '7')))
        {
            validPhone = 1;
        }
        else
        {
            printf("Numero de telephone invalide! Il doit comporter 10 chiffres et commencer par 06 ou 07.\n");
        }
    }

    printf("Entrez l'email: ");
    scanf("%s", reservation.email);

    printf("Entrez votre age: ");
    scanf("%d", &reservation.age);

    // Valider status
    int validStatus = 0;
    while (!validStatus)
    {
        printf("Entrez le statut (valide, reporte, annule, traite): ");
        scanf("%s", reservation.status);

        if (strcmp(reservation.status, "valide") == 0 || strcmp(reservation.status, "reporte") == 0 ||
            strcmp(reservation.status, "annule") == 0 || strcmp(reservation.status, "traite") == 0)
        {
            validStatus = 1;
        }
        else
        {
            printf("Statut invalide! Veuillez entrer un statut parmi (valide, reporte, annule, traite).\n");
        }
    }

    printf("Entrez la date de reservation (au format JJ-MM-AAAA): ");
    scanf("%11s", &reservation.date);

    // ajouter reservation au array
    reservations[count] = reservation;
    count++;

    printf("Reservation ajoutee avec succes! Votre ID est: %d\n", reservation.ID);
}

int modifier()
{
    int idRecherche;
    printf("Entrez l'ID de la reservation à modifier: ");
    scanf("%d", &idRecherche);

    // rechercher par ID
    for (int i = 0; i < count; i++)
    {
        if (reservations[i].ID == idRecherche)
        {
            printf("Reservation trouvee!\n");

            // Modification des champs
            printf("Modifier le nom (actuel: %s): ", reservations[i].nom);
            scanf("%s", reservations[i].nom);

            printf("Modifier le prenom (actuel: %s): ", reservations[i].prenom);
            scanf("%s", reservations[i].prenom);

            int validPhone = 0;
            while (!validPhone)
            {
                printf("Modifier le telephone (actuel: %s) (10 chiffres, commence par 06 ou 07): ", reservations[i].telephone);
                scanf("%s", reservations[i].telephone);

                if (strlen(reservations[i].telephone) == 10 && (reservations[i].telephone[0] == '0' && (reservations[i].telephone[1] == '6' || reservations[i].telephone[1] == '7')))
                {
                    validPhone = 1;
                }
                else
                {
                    printf("Numero de telephone invalide! Il doit comporter 10 chiffres et commencer par 06 ou 07.\n");
                }
            }

            printf("Modifier l'email (actuel: %s): ", reservations[i].email);
            scanf("%s", reservations[i].email);

            printf("Modifier l'age (actuel: %d): ", reservations[i].age);
            scanf("%d", &reservations[i].age);

            int validStatus = 0;
            while (!validStatus)
            {
                printf("Modifier le statut (actuel: %s) (valide, reporte, annule, traite): ", reservations[i].status);
                scanf("%s", reservations[i].status);

                if (strcmp(reservations[i].status, "valide") == 0 || strcmp(reservations[i].status, "reporte") == 0 ||
                    strcmp(reservations[i].status, "annule") == 0 || strcmp(reservations[i].status, "traite") == 0)
                {
                    validStatus = 1;
                }
                else
                {
                    printf("Statut invalide! Veuillez entrer un statut parmi (valide, reporte, annule, traite).\n");
                }
            }

            printf("Modifier la date de reservation (actuel: %s, au format JJ-MM-AAAA): ", reservations[i].date);
            scanf("%11s", &reservations[i].date);

            printf("Modification reussie!\n");
            return 0;
        }
    }

    printf("Reservation non trouvee!\n");
    return -1;
}

int supprimer()
{
    int idRecherche;
    printf("Entrez l'ID de la reservation à supprimer: ");
    scanf("%d", &idRecherche);

    // rechercher par ID
    for (int i = 0; i < count; i++)
    {
        if (reservations[i].ID == idRecherche)
        {
            // supprimer reservation selecter
            for (int j = i; j < count - 1; j++)
            {
                reservations[j] = reservations[j + 1];
            }
            count--; // minimiser le nombre de reservations
            printf("Reservation avec ID %d supprimee avec succes!\n", idRecherche);
            return 0;
        }
    }

    printf("Reservation non trouvee!\n");
    return -1;
}

int afficher()
{
    int choix;
    printf("Choisissez l'option d'affichage:\n");
    printf("1. Afficher toutes les reservations\n");
    printf("2. Afficher par ID\n");
    scanf("%d", &choix);

    if (choix == 1)
    {
        // Afficher toutes les reservations
        if (count == 0)
        {
            printf("Aucune reservation disponible.\n");
        }
        else
        {
            printf("Liste des reservations:\n");
            for (int i = 0; i < count; i++)
            {
                printf("ID: %d\n", reservations[i].ID);
                printf("Nom: %s\n", reservations[i].nom);
                printf("Prenom: %s\n", reservations[i].prenom);
                printf("Telephone: %s\n", reservations[i].telephone);
                printf("Age: %d\n", reservations[i].age);
                printf("Statut: %s\n", reservations[i].status);
                printf("Date: %s\n", reservations[i].date);
                printf("---------------------\n");
            }
        }
    }
    else if (choix == 2)
    {
        int idRecherche;
        printf("Entrez l'ID de la reservation à afficher: ");
        scanf("%d", &idRecherche);

        // Rechercher par ID
        for (int i = 0; i < count; i++)
        {
            if (reservations[i].ID == idRecherche)
            {
                // Afficher les details
                printf("Reservation trouvee:\n");
                printf("ID: %d\n", reservations[i].ID);
                printf("Nom: %s\n", reservations[i].nom);
                printf("Prenom: %s\n", reservations[i].prenom);
                printf("Telephone: %s\n", reservations[i].telephone);
                printf("Age: %d\n", reservations[i].age);
                printf("Statut: %s\n", reservations[i].status);
                printf("Date: %s\n", reservations[i].date);
                return 0;
            }
        }

        printf("Reservation non trouvee!\n");
    }
    else
    {
        printf("Choix invalide. Veuillez reessayer.\n");
    }
}

int statistique()
{
    if (count == 0)
    {
        printf("Aucune reservation disponible pour les statistiques.\n");
        return -1;
    }

    int totalAge = 0;
    int ageGroup[3] = {0, 0, 0}; // [0-18, 19-35, 36+]
    int statusCount[4] = {0};    // [valide, annule, reporte, traite]

    for (int i = 0; i < count; i++)
    {
        totalAge += reservations[i].age;

        // Count age par groups
        if (reservations[i].age <= 18)
        {
            ageGroup[0]++;
        }
        else if (reservations[i].age <= 35)
        {
            ageGroup[1]++;
        }
        else
        {
            ageGroup[2]++;
        }

        // Count par status
        if (strcmp(reservations[i].status, "valide") == 0)
        {
            statusCount[0]++;
        }
        else if (strcmp(reservations[i].status, "annule") == 0)
        {
            statusCount[1]++;
        }
        else if (strcmp(reservations[i].status, "reporte") == 0)
        {
            statusCount[2]++;
        }
        else if (strcmp(reservations[i].status, "traite") == 0)
        {
            statusCount[3]++;
        }
    }

    double averageAge = (double)totalAge / count;
    printf("Moyenne d'ege des patients: %.2f ans\n", averageAge);
    printf("Nombre de patients par d'age:\n");
    printf("0-18 ans: %d\n", ageGroup[0]);
    printf("19-35 ans: %d\n", ageGroup[1]);
    printf("36 ans et plus: %d\n", ageGroup[2]);
    printf("Nombre total de reservations par statut:\n");
    printf("Valide: %d\n", statusCount[0]);
    printf("Annule: %d\n", statusCount[1]);
    printf("Reporte: %d\n", statusCount[2]);
    printf("Traite: %d\n", statusCount[3]);
    return 0;
}

int tri()
{
    int choix;
    printf("Choisissez l'option de tri:\n");
    printf("1. Trier par nom\n");
    printf("2. Trier par statut\n");
    scanf("%d", &choix);

    if (choix == 1)
    {
        // Tri par nom
        if (count == 0)
        {
            printf("Aucune reservation disponible pour le tri.\n");
        }
        else
        {
            for (int i = 0; i < count - 1; i++)
            {
                for (int j = 0; j < count - i - 1; j++)
                {
                    if (strcmp(reservations[j].nom, reservations[j + 1].nom) > 0)
                    {
                        // Échanger les réservations
                        Reservation temp = reservations[j];
                        reservations[j] = reservations[j + 1];
                        reservations[j + 1] = temp;
                    }
                }
            }
            printf("Reservations triees avec succes par nom!\n");
        }
    }
    else if (choix == 2)
    {
        // Tri par statut
        if (count == 0)
        {
            printf("Aucune reservation disponible pour le tri.\n");
        }
        else
        {
            for (int i = 0; i < count - 1; i++)
            {
                for (int j = 0; j < count - i - 1; j++)
                {
                    if (strcmp(reservations[j].status, reservations[j + 1].status) > 0)
                    {
                        // Échanger les réservations
                        Reservation temp = reservations[j];
                        reservations[j] = reservations[j + 1];
                        reservations[j + 1] = temp;
                    }
                }
            }
            printf("Reservations triees avec succes par statut!\n");
        }
    }
    else
    {
        printf("Choix invalide. Veuillez reessayer.\n");
    }

    return 0;
}

int main()
{
    int choix;

    ajouterPredefinies();

    do
    {
        printf("====================== Menu =========================\n");
        printf("1 - Ajouter patient\n");
        printf("2 - Modifier\n");
        printf("3 - Supprimer\n");
        printf("4 - Afficher\n");
        printf("5 - Statistique\n");
        printf("6 - Tri\n");
        printf("7 - Quitter\n");
        printf("Veuillez choisir une option: ");
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
            afficher();
            break;
        case 5:
            statistique();
            break;
        case 6:
            tri();
            break;
        case 7:
            printf("Quitter le programme.\n");
            break;
        default:
            printf("Choix non correct. Veuillez reessayer.\n");
        }
    } while (choix != 7);

    return 0;
}