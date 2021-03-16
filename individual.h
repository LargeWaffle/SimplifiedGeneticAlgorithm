//
// Created by LargeWaffle on 16/03/2021.
//

#ifndef SIMPLIFIEDGENALGORITHM_INDIVIDUAL_H
#define SIMPLIFIEDGENALGORITHM_INDIVIDUAL_H

#include "essentials.h"

// Fonction pour les listes de bits :

Individu* creer_indiv(void);// Creer une liste de bits

Individu* ajouterT_indiv(Individu*, Bit); // Ajouter un bit a la liste de bits en tete
Individu* ajouterQ_indiv(Individu*, Bit); // Ajouter un bit a la liste de bits en queue
Individu* copy_indiv(Individu*);  //Copie un individu

Individu* init_indiv(Individu*, int); // Initialiser la liste de bits
Individu* initRecur_indiv(Individu*, int); // Version recursive de la fonction precedente
int vide_indiv(Individu*); // Verifie si la liste de bits est vide. Renvoie 1 si oui, 0 si non
void afficher_indiv(Individu*); // Permet d'afficher la liste de bits

unsigned int decodage_indiv(Individu*);    // Decode la liste de bit en un nombre entier

float qualiteIndiv(unsigned int);  // Calcule la qualtite d'un individu en fonction de son decodage
//float qualiteIndivAlt1(unsigned int);
//float qualiteIndivAlt2(unsigned int);

void croiser_indiv(Individu*, Individu*);  // Croise deux individus entres eux

#endif //SIMPLIFIEDGENALGORITHM_INDIVIDUAL_H
