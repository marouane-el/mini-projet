#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct contact {
    char nom [60];
    char numero [60];
    char email [60];
};
struct contact tab [100];
int count=0;


void menu (){
    int (choix);
       printf("1. Ajouter un Contact\n");
       printf("2.Modifier un Contact\n");
       printf("3.Supprimer un Contact\n");
       printf("4.Afficher Tous les Contacts\n");
       printf("5.Rechercher un Contact\n");
       printf("6. quitter.\n");
       printf("------------------------\n");
       scancf("%d",&choix);
};
void ajouter (){
    printf("contact %d",count+1);
    printf("enter le nom de contact ");
    scanf(" %[^\n]",tab [count].nom);
    printf("entrer le numero de telephone");
    scanf(" %[^\n]",tab [count].numero");
    printf("entrer l adresse email");
    scanf(" %[^\n]",tab [count].email);
    };
void modifier (){
      char cherche[15];
    printf("entrer le contact a modifier:");
    scanf("%s",&cherche);
    



}  



int main ()
{
while(1){
        menu ();
    switch(choix){
                    case 1: ajouter ();
                            break;
                    case 2: modifier ();
                            break;
    
    
    
    
                 }
        
        
        
        
        
        
        
        
        
        
        
        }



















return 0;
}