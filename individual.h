//
// Created by LargeWaffle on 16/03/2021.
//

#ifndef SIMPLIFIEDGENALGORITHM_INDIVIDUAL_H
#define SIMPLIFIEDGENALGORITHM_INDIVIDUAL_H

#include "essentials.h"

// Fonction pour les listes de bits :

Individu* creer_indiv(void);// Creer une liste de bits

Individu* ajouterT_indiv(Individu*,Bit); // Ajouter un bit a la liste de bits en tete
Individu* ajouterQ_indiv(Individu*,Bit); // Ajouter un bit a la liste de bits en queue
Individu* copy_indiv(Individu*);  //Copie un individu

Individu* init_indiv(Individu*, int); //initialiser la liste de bits
Individu* initRecur_indiv(Individu*, int); //version recursive de la fonction pr�cedente
int vide_indiv(Individu*); // Verifie si la liste de bits est vide. Renvoie 1 si oui, 0 si non
void afficher_indiv(Individu*); // Permet d'afficher la liste de bits

unsigned int decodage_indiv(Individu*);    //decode la liste de bit en un nombre entier
float qualiteIndivf1(unsigned int);  //calcule la qualtite d'un individu avec la fonction f1 en fonction de son decodage
float qualiteIndivf2(unsigned int);  //calcule la qualtite d'un individu avec la fonction f2 en fonction de son decodage
float qualiteIndivf3(unsigned int);  //calcule la qualtite d'un individu avec la fonction f3 en fonction de son decodage
void croiser_indiv(Individu*, Individu*);  //croise deux individus entres eux

#endif //SIMPLIFIEDGENALGORITHM_INDIVIDUAL_H
