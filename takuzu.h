//
// Created by raphb on 06/04/2022.
//

#ifndef TAKUZU_TAKUZU_H
#define TAKUZU_TAKUZU_H
#define max4x4 4
#define max8x8 8
#include <stdio.h>
#include <stdlib.h>
#include "takuzu.h"


void solution4x4(int tableau[max4x4][max4x4] );
void solution8x8(int tableau[max8x8][max8x8] );
void afficher_grille(int** tableau,int n);
void creer_masque_manu(int** Masque,int n);
int choisir_taille();

#endif //TAKUZU_TAKUZU_H
