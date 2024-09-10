#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct biblio {
    char titre;
    char auteur;
    int prix ;
    int stock;
    };
    struct biblio tab[100];
    int cout;
void ajouter(){
     int n,i;
     printf("combien de livre:");
     scanf("%d",&n);
     for(i=0;i<n;i++){
        printf("le titre de livre ");
        scanf(" %[^\n]s",&tab[i].titre);
        printf("l auteur de livre ");
        scanf(" %[^\n]s",&tab[i].auteur);
        printf("prix de livre ");
        scanf(" %[^\n]s",&tab[i].prix);
        printf("quantite de livre");
        scanf(" %[^\n]s",&tab[i].stock);
        

     }
main();
}

int main (){
    int choix;
do{
    printf("\n------------menu------------");
    printf("\n1. Ajouter un Livre au Stock.\n");
    printf("2. Afficher Tous les Livres Disponibles.\n");
    printf("3. Mettre a Jour la Quantite d\' un Livre.\n");
    printf("4. Supprimer un Livre du Stock.\n");
    printf("5. Afficher le Nombre Total de Livres en Stock.\n");
    printf("7. quitter.\n");
    printf("quel et votre choix: ");
    scanf("%d",&choix);


switch(choix){
              case 1:
                  ajouter();
                  break;



















}


}while(choix !=5);
return 0;