//
// Created by raphb on 06/04/2022.
//


#include "takuzu.h"
//typedef int matrice4x4[max4x4][max4x4];
//typedef int matrice8x8[max8x8][max8x8];


//Pour afficher une grille de n'importe quelle taille déclarée dynamiquement
void afficher_grille(int** tableau,int n)
{
    int i,j;
    if (n==4)
    {
        printf("  A B C D\n");
    }
    else
    {
        printf("  A B C D E F G H\n");
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",i+1);
        for(j=0;j<n;j++)
            printf("%d ",*(*(tableau+i)+j));
        printf("\n");
    }

}
void creer_masque_manu(int** Masque,int n)
{
    int nb_val;
    int num_ligne,num_col;
    char lettre_col;
    do
    {
        printf("Combien de valeurs voulez-vous que le masque cache? (valeur comprise entre %d et %d)",0,n*n-n);
        scanf("%d",&nb_val);
    }while (nb_val<0 || nb_val>n*n-n);
    for (int k=0;k<nb_val;k++)
    {
        printf("Voici votre masque :\n\n");
        afficher_grille(Masque,n);
        do{
            printf("Veuillez saisir la lettre majuscule de la colonne suivie du numero de la ligne de l'element à cacher (separes par un espace\n");
            scanf("%c %d",&lettre_col,&num_ligne);
            num_col=lettre_col-'A'+1;
        }while ((num_ligne<1||num_ligne>n)||(num_col<1||num_col>n));
        *(*(Masque+num_ligne-1)+num_col-1)=0;
    }
    printf("Voici donc votre masque final:\n");
    afficher_grille(Masque,n);
}
int choisir_taille()
{
    int choixtaille;
    do {
        printf("Veuillez choisir la taille: 4x4 ou 8x8\n");
        printf("1) Taille : 4x4\n");
        printf("2) Taille: 8x8\n");
        scanf("%d", &choixtaille);
    } while (choixtaille < 1 || choixtaille > 2);
    if (choixtaille==1)
    {
        return 4;
    }
    return 8;
}
