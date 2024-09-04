#include <stdio.h>
#include <string.h>
int main (){
    char titre[100][100],nom[20],supprimer[20];
    char auteur[100][100];
    float prix[100];
    int quantite[100];
    int i,j,k;
         for(i=0;i<=2;i++){
                 printf("le nom du livre \n");
                 scanf("%s",&titre[i]);
                 printf("le nom de l'auteur \n");
                 scanf("%s",&auteur[i]);
                 printf("le prix du livre \n");
                 scanf("%f",&prix[i]);
                 printf("la quantite en stock \n");
                 scanf("%d",&quantite[i]);
               //   printf("le nom du livre est \t%s \n",titre);
               //   printf("le nom de l'auteur est \t%s \n",auteur);
               //   printf("le prix du livre \t %f \n",prix[0]);
               //   printf("la quantite en stock \t %d \n",quantite[0]);
}
         printf("tout les livres disponibles\n");
          for(i=0;i<=2;i++){
                    printf("le nom du livre est %s\n",titre[i]);
                    printf("le nom de l'auteur est %s\n",auteur[i]);
                    printf("le prix du livre %f\n",prix[i]);
                    printf("la quantite en stock %d\n",quantite[i]);
        }
          printf("le nom du livre rechercher .\n");
          scanf("%s",&nom);
          for(i=0;i<=2;i++){
               if(strcmp(titre[i],nom)==0){
                    j=1;
               }
          }  
          if(j==1){
               printf("le nom du livre existe\n");
          }else  
                printf("le nom du livre n existe pas \n");
                   

                   printf("entrer le nom du livre a suprrimer\n");
                   scanf("%s",&supprimer);
                   for(i=0;i<=2;i++){
                    if(strcmp(titre[i],supprimer)==0){
                         for(k=i;k<2;k++){
                              strcpy(titre[k],titre[k+1]);
                              strcpy(auteur[k],auteur[k+1]);
                              prix[k]=prix[k+1];
                              quantite[k]=quantite[k+1];
                              printf("le livre est supprimer");
                    }
                   }}
                         
        return 0;































}


                















    