#include<stdio.h>
#include<string.h>

#define max_livre 100
 
    char titre[100][100];
    char auteur[100][100];
    double prix[100];
    int quantite[100];
int nombre_de_livres = 0;

int main() {
    int choix;
    char titree[100];
    int i,somme=0;
    do {
        printf("1. Ajouter un livre au stock\n");
        printf("2. Afficher tous les livres disponibles\n");
        printf("3. Rechercher un livre par son titre\n");
        printf("4. Mettre à jour la quantité d'un livre\n");
        printf("5. Supprimer un livre du stock\n");
        printf("6. Afficher le nombre total de livres en stock\n");
        printf("7. Quitter le systeme\n");
        printf("Entrez votre choix: ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                    printf("titre du livre:\n ");
                    scanf(" %s",&titre[nombre_de_livres]);

                    printf("auteur du livre:\n ");
                    scanf(" %s",&auteur[nombre_de_livres]);
                   printf("le prix:\n ");
                    scanf("%lf",&prix[nombre_de_livres]);
                    printf("la quantite:\n ");
                    scanf("%d",&quantite[nombre_de_livres]);
                nombre_de_livres++;
                    printf("livre est ajouter \n");
                break;
            case 2:
                  if (nombre_de_livres == 0) {
                        printf("aucun livre en stock\n");
                    }

                    for (int i = 0; i < nombre_de_livres; i++) {
                        printf("titre: %s\n",titre[i]);
                        printf("auteur: %s\n",auteur[i]);
                        printf("prix: %lf\n",prix[i]);
                        printf("quantité: %d\n",quantite[i]);
                    }
            break;
            case 3:
                                
                printf("Entrez le titre du livre à rechercher: ");
                scanf("%s", titree);
                    printf("");
                for (int i = 0; i < nombre_de_livres; i++) {
                    if (strcmp(titre[i], titree) == 0) {
                        printf("livre trouver:\n");
                        printf("titre: %s\n",titre[i]);
                        printf("auteur: %s\n",auteur[i]);
                        printf("prix: %lf\n",prix[i]);
                        printf("quantite: %d\n",quantite[i]);
                    
                    }
                break;
            case 4:
                        printf("entrez le titre du livre a mettre a jour: ");
                        scanf("%s",titree);
                        for (int i = 0; i < nombre_de_livres; i++) {
                            if (strcmp(titre[i],titree) == 0) {
                                printf("Entrez la nouvelle quantité: ");
                                scanf("%d",&quantite[i]);
                                printf("Quantité mise à jour est %d\n",quantite[i]);
                                
                            }
                    
                        }
                break;
            case 5:
                    printf("entrez le titre du livre a supprimer: ");
                scanf("%s", titree);

                for (int i = 0; i < nombre_de_livres; i++) 
                {
                    if (strcmp(titre[i],titree) == 0) 
                    {
                        for (int j = i; j < nombre_de_livres; j++)
                        {
                            strcpy(titre[j],titre[j+1]);
                            strcpy(auteur[j],auteur[j+1]);
                            prix[j] = prix[j+1];
                            quantite[j] = quantite[j+1];

                        }
                        nombre_de_livres--;
                        printf("livre supprime avec succes!\n");
                        
        
                        }

                        printf("Livre non trouve!\n");
                    }
            break;
            case 6:
                
                for(i=0;i<nombre_de_livres;i++){
                    somme=somme+quantite[i];
                }
                printf("nombre total de livres en stock: %d\n",somme);
                break;
            case 7:
                printf("quitter le programme\n");
                break;
            default:
                printf("Choix n'existe pas\n");
                break;
                }
        }
        
    }while (choix != 7);

    return 0;
}
