#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "essentials.h"
#include "individual.h"
#include "population.h"


int main()
{
    srand(time(NULL));

    Population* Pop = init_pop(creer_pop(), TAILLEPOP);	// Initialisation de la Population
    int i;

    for(i = 0; i < NGEN; i++)	// Repetition NGEN fois
    {
        Pop = croiser_pop(Pop);		// Croisement de la population
        Pop = trier_pop(Pop, Pop->head, Pop->tail); // Tri de la population
        Pop = select_pop(Pop, TSELECT);		// Selection de la population
    }

    printf("\nLe meilleur individu de cette population est :\n");	// Affichage du meilleur individu
    afficher_indiv(Pop->head->value);
    printf("\nQualite : %f\n", qualiteIndiv(decodage_indiv(Pop->head->value)));// Affichage de sa qualité pour faciliter l'étude
    return 0;
}
