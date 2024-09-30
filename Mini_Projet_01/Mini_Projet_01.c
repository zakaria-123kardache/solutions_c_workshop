#include <stdio.h>
#include <stdlib.h>

 
char titre[100][50];    
char auteur[100][50];   
float prix[100];        
int quantite[100];      

 
int n = 0;
 
void Ajouter() {
    int count;
    printf("quelle les livre pour vous add ");
    scanf("%d", &count);
    
    for (int i = n; i < n + count; i++) {

        printf("add a livre %d: ", i + 1);
        scanf("%s", titre[i]);  
        
        printf("add a l'auteur %d: ", i + 1);
        scanf("%s", auteur[i]);   
        
        printf("le pric de cette lvre %d: ", i + 1);
        scanf("%f", &prix[i]);  
        
        printf("add la qantitee %d: ", i + 1);
        scanf("%d", &quantite[i]);  
 
    }
    
    n += count; 
}

 
void Afficher() {
    for (int i = 0; i < n; i++) {

        printf("le livre%d:\n", i + 1);
        printf("le titre: %s\n", titre[i]);
        printf("l'auteur %s\n", auteur[i]);
        printf("la prix : %.2f\n", prix[i]);
        printf("la quantites  %d\n", quantite[i]);
   

    }
}

 
void mttrejour() {
    char TR[50];
    int NQ;
    int trouve = 0;
    
    printf("add le titre ede livre pour  editer  ");
    scanf("%s", TR);
    
    for (int i = 0; i < n; i++) {
        if (strcmp(titre[i], TR) == 0) {
            printf("la quntite aujourduits esst  %d\n", quantite[i]);
            printf(" Entre nouveaux quantites ");
            scanf("%d", &NQ);
            
            quantite[i] = NQ;
            trouve = 1;
            break;
        }
    }
    
    if (!trouve) {
        printf("le livres de cette nom non existe %s\n", TR);
    }
}

 
void supprime() {
    char TR[50];
    int trouve = 0;
    
    printf("entre le nm de livre pour supreme  ");
    scanf("%s", TR);
    
    for (int i = 0; i < n; i++) {

        if (strcmp(titre[i], TR) == 0) {
            trouve = 1;
            
            for (int j = i; j < n - 1; j++) {
                for (int k = 0; k < 50; k++) {   
                    titre[j][k] = titre[j + 1][k];
                    auteur[j][k] = auteur[j + 1][k];
                }
                prix[j] = prix[j + 1];
                quantite[j] = quantite[j + 1];
            }
            n--;  
            printf("le suprimation est bein recus <%s>.\n", TR);
            break;
        }
    }
    
    if (!trouve) {
        printf("le livre non existe \n", TR);
    }
}

 
void aficherquntitrtotal() {
    int total = 0;
    
    for (int i = 0; i < n; i++) {
        total += quantite[i];
    }
    
    printf("la quantites generales esst  %d\n", total);
}

int main() {
    int choix;
    
    do {
        printf(" munu \n");
        printf("1- add livres\n");
        printf("2- afficher tous les livres \n");
        printf("3- edites la quantites des livres \n");
        printf("4- supreme me livres n");
        printf("5- afficher la quantites  generalse de livres n");
        printf("6- sorties \n");
        printf(" anderen ");
        scanf("%d", &choix);
        
        switch (choix) {
            case 1:
                Ajouter();
                break;
            case 2:
                Afficher();
                break;
            case 3:
                MettreAJour();
                break;
            case 4:
                Supprimer();
                break;
            case 5:
                aficherquntitrtotal();
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
