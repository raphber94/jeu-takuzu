#include <stdio.h>
#include "takuzu.h"

int main() {
    int var;
    int choix;
    int taille=0;
    int tab[max4x4][max4x4]={{0,1,1,0},{1,0,0,1},
                             {0,0,1,1},{1,1,0,0}};
    int tableau[max8x8][max8x8]= {{0,0,1,1,0,1,0,1},
                                  {0,1,1,0,1,0,1,1},
                                  {0,0,1,0,1,0,1,0},
                                  {1,0,1,1,0,1,1,0},
                                  {1,0,0,1,0,1,0,1},
                                  {1,0,1,1,0,0,1,0},
                                  {0,1,0,1,0,1,1,0},
                                  {0,1,0,1,0,0,1,0}};
    int masque[max4x4][max4x4]={{0,0,1,1},
                                {0,1,1,0},
                                {0,1,0,1},
                                {0,0,0,1}};
    do {
        printf("Bienvenue dans le menu, choisissez l'option que vous souhaitez: \n");
        printf("1) Resoudre la grille\n");
        printf("2) Resoudre automatiquement une grille\n");
        printf("3) Generer une grille de de Takuzu\n");
        printf("Veuillez choisir le numero que vous desirez\n");
        scanf("%d", &var);
    } while (var < 0 || var > 3);
    if (var == 1) {
        do {
            printf("1) Choisir la taille de la grille: 4x4 ou 8x8\n");
            printf("2) Saisissez manuellement un masque\n");
            printf("3) Generez automatiquement un masque\n");
            printf("4) Jouez\n");
            printf("Veuillez choisir le numero que vous désirez\n");
            scanf("%d", &choix);
        } while (choix < 0 || choix > 4);
        switch (choix)
        {
            case 1: {
                taille=choisir_taille();
                break;
            }
            case 2:
            {
                if(taille==0)
                {
                    taille=choisir_taille();
                }
                int **M = (int**) malloc(taille * sizeof(int*));
                for (int i = 0; i < taille; i++)
                {
                    M[i] = malloc(taille * sizeof (int));
                    for (int j=0;j<taille;j++)
                    {
                        *(*(M+i)+j)=1;
                    }
                }
                creer_masque_manu(M,taille);
            }
        }
    }
    printf("SUUUU\n");
    afficher_grille(&tab,4);
    return 0;
}
