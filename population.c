//
// Created by LargeWaffle on 16/03/2021.
//

#include <stdio.h>
#include <stdlib.h>

#include "essentials.h"
#include "individual.h"
#include "population.h"

Population* creer_pop(void)
{
    Population* Pop = malloc(sizeof(Population));     // On déclare la structure

    if (Pop != NULL)            // On verifie que ça a marché
    {
        Pop->taillePop = 0;     // On remplie la structure
        Pop->head = NULL;
        Pop->tail = NULL;
    }

    return Pop;
}

int vide_pop(Population* Pop)
{
    return(Pop->head == NULL);
}

Population* ajouterT_pop(Population* Pop, Individu* Indiv)
{
    ElemIndiv* nvElem = malloc(sizeof(ElemIndiv)); // Allocation de la mémoire

    nvElem->value = Indiv;              // On remplit le nouvel element
    nvElem->next = Pop->head;
    nvElem->precedent = NULL;

    if(vide_pop(Pop))               // On verifie si la liste est vide
    {
        Pop->tail = nvElem;
    }
    else
    {
        Pop->head->precedent = nvElem;
    }


    Pop->head = nvElem;     // On repositionne la tete sur le nouvel element
    Pop->taillePop++;

    return Pop;
}

Population* ajouterQ_pop(Population* Pop, Individu* Indiv)
{
    ElemIndiv* nvElem = malloc(sizeof(ElemIndiv)); // Allocation de la mémoire

    nvElem->value = Indiv;          // On remplie le nouvel element
    nvElem->next = NULL;
    nvElem->precedent = Pop->tail;

    if(vide_pop(Pop))           // On verifie si la liste est vide
    {
        Pop->head = nvElem;
    }
    else
    {
        Pop->tail->next = nvElem;
    }

    Pop->tail = nvElem;     // On repositionne la queue sur le nouvel element
    Pop->taillePop++;

    return Pop;
}

Population* supprimerQ_pop(Population* Pop)
{
    if(!vide_pop(Pop))
    {
        Pop->tail = Pop->tail->precedent;          // On recule la queue d'un element
        free(Pop->tail->next);                     // On libère la mémoire de l'ancienne queue
        Pop->tail->next = NULL;

        Pop->taillePop--;
    }

    return Pop;
}


Population* init_pop(Population* pop , int taillePop)
{
    int i;                                              // On declare les variables utilisées ensuite
    Individu* nvIndiv = malloc(sizeof(Individu));

    for(i = 0; i < taillePop; i++)                  // On ajoute un individu jusquà ce que population soit de la bonne taille
    {
        nvIndiv = creer_indiv();            // On créé et initialise un individu à ajouter
        nvIndiv = init_indiv(nvIndiv, LONGINDIV);
        pop = ajouterT_pop(pop, nvIndiv);
    }

    return pop;
}


void afficher_pop(Population* Pop)
{
    ElemIndiv* ElemInd = malloc(sizeof(ElemIndiv)); // On créé un element qui va parcourir la liste

    if(!vide_pop(Pop))
    {
        ElemInd = Pop->head;
        //printf("taille : %d\n", Pop->taillePop);
        for(int i = 0; i < Pop->taillePop; i++) // On affiche les individus
        {
            afficher_indiv(ElemInd->value);
            ElemInd = ElemInd->next;
        }
    }
}


Population* trier_pop(Population* Pop, ElemIndiv* debut, ElemIndiv* fin)
{

    float pivot, qGauche, qDroite;                     // Initialisation des variables utilisées plus tard
    ElemIndiv* gauche = malloc(sizeof(ElemIndiv));
    ElemIndiv* droite = malloc(sizeof(ElemIndiv));
    Individu* temp = malloc(sizeof(ElemIndiv));
    if(!vide_pop(Pop))
    {
        if(debut != fin)                                            // Si la portion de liste étudiée ne comprends pas qu'un élément alors on la trie
        {
            pivot = qualiteIndiv(decodage_indiv(debut->value));         // On choisit le premier élement comme pivot et on positionne droite et gauche à chaque extremité
            gauche = debut;
            droite = fin;

            while(droite != gauche)
            {
                qGauche = qualiteIndiv(decodage_indiv(gauche->value));          // On affecte les qualité correspondante à qGauvhe et qDroite pour effectuer les comparaisons
                qDroite = qualiteIndiv(decodage_indiv(droite->value));

                while(qDroite < pivot)                                  // On positionne droite sur le premier individu dont la qualité est superieure au pivot
                {
                    droite = droite->precedent;
                    qDroite = qualiteIndiv(decodage_indiv(droite->value));
                }

                while(qGauche > pivot)                              // On positionne gauche sur le premier individu dont la qualité est inferieure au pivot
                {
                    gauche = gauche->next;
                    qGauche = qualiteIndiv(decodage_indiv(gauche->value));
                }

                if(qGauche == qDroite && droite != gauche)          // On verifie que les deux individus comparés ne sont pas identiques
                {
                    gauche = gauche->next;
                    qGauche = qualiteIndiv(decodage_indiv(gauche->value));
                }
                else
                {
                    if(qGauche < qDroite)           // Si ils ne le sont pas et que qDroite est superieur à qGauche alors on echange les valeurs de droite et gauche
                    {
                        temp = gauche->value;
                        gauche->value = droite->value;
                        droite->value = temp;
                    }
                }
            }

            if(gauche != debut)                                     // Si la partie de la liste à gauche du pivot ne contient pas qu'un élément
            {
                Pop = trier_pop(Pop, debut, gauche->precedent);     // On trie la gauche du pivot
            }
            if(droite != fin)                                       // Si la partie de la liste à droite du pivot ne contient pas qu'un élément
            {
                Pop = trier_pop(Pop, droite->next, fin);            // On trie la droite du pivot
            }
        }
    }

    return Pop;     //on renvoie la population triée
}

Population* select_pop(Population* Pop, int tSelect)
{
    ElemIndiv* ElemCopy = malloc(sizeof(ElemIndiv));    // On déclare un element de copie
    int i;

    if(!vide_pop(Pop))
    {
        ElemCopy = Pop->head;

        for(i = 0; i < TAILLEPOP - tSelect; i++)    // On tronque la liste pour quelle soit de taille tSelect
        {
            Pop = supprimerQ_pop(Pop);
        }

        for(i = 0; i < TAILLEPOP - tSelect; i++)        // On remplie la liste en copiant les premier elements
        {
            Pop = ajouterQ_pop(Pop, ElemCopy->value);
            ElemCopy = ElemCopy->next;
        }
    }

    return Pop;
}

Population* croiser_pop(Population* P1)
{
    Individu* indiv1 = creer_indiv();       // Declaration des variables
    Individu* indiv2 = creer_indiv();
    ElemIndiv* elemCroise = malloc(sizeof(ElemIndiv));
    Population* P2 = creer_pop();
    int i, j, rnd1, rnd2;

    if(!vide_pop(P1))
    {
        for(i = 0; i < TAILLEPOP/2; i++)
        {
            rnd1 = rand()%(TAILLEPOP-1)+1;   // On choisit la position du premier element à croiser
            elemCroise = P1->head;

            for(j = 0; j < rnd1; j++)    //On positionne elemCroise dessus
            {
                elemCroise = elemCroise->next;
            }

            indiv1 = copy_indiv(elemCroise->value);       // On copie la valeur du premier element pour ne pas modifier P1

            do
            {
                rnd2 = rand()%(TAILLEPOP-1)+1;   // On choisit la position du deuxieme element à croiser
            }while(rnd1 == rnd2);

            elemCroise = P1->head;
            for(j = 0; j < rnd2; j++)    // On positionne elemCroise dessus
            {
                elemCroise = elemCroise->next;
            }

            indiv2 = copy_indiv(elemCroise->value); // Pareillement avec le deuxieme element

            croiser_indiv(indiv1, indiv2);       // On les croise

            P2 = ajouterT_pop(P2, indiv1);    // On les ajoutes
            P2 = ajouterT_pop(P2, indiv2);
        }

        if(TAILLEPOP%2)         // Si la taille de la population est impaire on ajoute un élément en plus
        {
            rnd1 = rand()%(TAILLEPOP-1)+1;   // On choisit la position du premier element à croiser
            elemCroise = P1->head;

            for(j = 0; j < rnd1; j++)    // On positionne elemCroise dessus
            {
                elemCroise = elemCroise->next;
            }

            indiv1 = copy_indiv(elemCroise->value);       // On copie la valeur du premier element pour ne pas modifier P1

            do
            {
                rnd2 = rand()%(TAILLEPOP-1)+1;   // On choisit la position du deuxieme element à croiser
            }while(rnd1 == rnd2);

            elemCroise = P1->head;
            for(j = 0; j < rnd2; j++)    // On positionne elemCroise dessus
            {
                elemCroise = elemCroise->next;
            }

            indiv2 = copy_indiv(elemCroise->value); // Pareillement avec le deuxieme element

            croiser_indiv(indiv1, indiv2);       // On les croise

            P2 = ajouterT_pop(P2, indiv1);    // On ajoute un élément
        }
    }

    return P2;
}
