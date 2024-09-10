#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct biblio {
        char titre [30];
        char auteur[30];
        int prix;
        int stock;
        };

        struct biblio tab [80];
        int n=0;
        char titreliv[40];
        int i;

void ajouter(){
       //n=0,

         printf("entrer les infos de livre %d: \n",n+1);
         printf("le titre de livre: ");
         scanf(" %[^\n]s",&tab[n].titre);
         printf("auteur de livre: ");
         scanf(" %[^\n]s",&tab[n].auteur);
         printf("prix de livre: ");
         scanf(" %d",&tab[n].prix);
         printf("quantite en stock: ");
         scanf(" %d",&tab[n].stock);
         n++;
                }

void afficher(){
    if (n==0){
        printf("aucune livre en stock\n");
    }
    else
    {


              for(i=0;i<n;i++){
                printf("le titre de livre:%s \n",tab[i].titre);
                printf("auteur de livre:%s \n",tab[i].auteur);
                    printf("prix de livre:%d \n",tab[i].prix);
                printf("quantite en stock:%d \n",tab[i].stock);
                }
                           }
}

void modifier(){

printf("entrer le titre a modifier: ");
scanf("%s",titreliv);
for(i=0;i<n;i++){
        if(strcasecmp(tab[i].titre,titreliv)==0){
            printf("entrer la nouvelle quantite de stock: ");
            scanf("%d",&tab[i].stock);
            printf("la quantite a ete modifier\n");
        }
        else
            printf("le livre ne trouve pas\n");

       }
}

void supprimer(){

printf("entrer le titre a supprimer: ");
scanf("%s",titreliv);
for(i=0;i<n;i++){
        if(strcasecmp(tab[i].titre,titreliv)==0){
            strcpy(tab[i].titre,tab[i+1].titre);
            strcpy(tab[i].auteur,tab[i+1].auteur);
            tab[i].prix=tab[i+1].prix;
            tab[i].stock=tab[i+1].stock;
        }
         printf("le livre a ete supprime\n");
        n--;
}
}

int totalstock(){
 int s=0;
   for(i=0;i<n;i++){
        s+= tab[i].stock;
}
return s;
}

int main()
{
 int choix ;
 int n,i;
  //printf("combien de livre: ");
        //scanf("%d",&n);
 while(1){
    printf("\n-----------------MENU------------------\n"),
    printf("\n1- ajouter un livre au stockc\n");
    printf("2- afficher tous les livres disponibles\n");
    printf("3- mettre a jour la quantite d\'un livre\n");
    printf("4- supprimer un livre de stock\n");
    printf("5-total stock\n");
    printf("6-quitter le programe\n");
    printf("-----------------------------------------\n");
    scanf("%d",&choix);
    switch(choix){
                   case 1 :
                          ajouter();
                          break;
                   case 2 :afficher();

                           break;

                   case 3 :modifier();
                       break;
                    case 4 :supprimer();
                       break;
                    case 5 :  printf("le total stock:%d\n",totalstock());
                       break;
                       case 6 : return 0;
                       break;




                 }



 }

    return 0;
}
