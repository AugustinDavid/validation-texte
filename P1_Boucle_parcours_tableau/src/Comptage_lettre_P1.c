/*
 * Comptage_lettre_P1.c
 *
 *  Created on: 16 sept. 2019
 *      Author: daugustin
 */

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include<string.h>

//D'une manière général faire attention à mon indentation
//ATTENTION A L'INDENTATION A LA DECLARATION
char tab_texte[] =
		"Qu'est-ce qu'un processeur ARM ?\n"
				"C'est un type de processeur particulier dont l'agencement des composants électroniques permet\n"
				"une taille réduite. ARM est l'acronyme de Advanced Risk Machine. A l'origine, le A de ARM\n"
				"signifiait Acorn, le nom de la société qui a équipé pour la première fois un ordinateur avec un\n "
				"processeur ARM, en 1987. Depuis, l'architecture ARM a rencontré un succès qui ne se dément \n"
				"pas, notamment ces dernières années. Des processeurs ARM, on en trouve dans tous les\n"
				"smartphones récents : iPhone 4, Samsung Galaxy S, tout comme dans l'iPad, le Nokia N97 ou le\n"
				"Nexus One de Google. Mais la société ARM ltd ne fabrique pas, à proprement parler, les\n"
				"processeurs. Elle conçoit les architectures des processeurs, leurs plans en quelque sorte. Ce sont\n"
				"les clients qui, après achat des licences, produisent les processeurs. Par exemple, Samsung\n"
				"fabrique un processeur ARM pour ses téléphones haut de gamme (Samsung Galaxy S et Wave),\n"
				"reposant sur l'architecture ARM Cortex-A8, cadencée à 1 GHz. Le processeur Apple A4, qui\n"
				"équipe les iPhone 4 et les iPad, utilise exactement la même architecture Cortex-A8. Ces “ petits”\n"
				"processeurs connaissent un tel succès qu'ils évoluent très rapidement : Samsung a déjà annoncé\n"
				"le remplaçant de Cortex-A8 ; celui-ci répond au nom de Cortex-A9 et intègre deux cœurs, comme\n"
				"dans les PC. Quant au Cortex-A15, qui devrait être disponible dans une vingtaine de mois, on sait\n"
				"déjà qu'il s'agira d'un processeur quatre cœurs cadencé à 2,5 GHz et basse consommation ! Un tel\n"
				"processeur devrait avoir des performances similaires à celles d'un ordinateur portable très haut de\n"
				"gamme, alors qu'il est prévu pour être embarqué dans un téléphone de seulement quelques\n"
				"millimètres d'épaisseur.\n";
int i = 0;
int compteur_voyelle = 0;
int compteur_consonne = 0;
int compteur_lettre = 0;

int main() {

	while (tab_texte[i] != '\0') //parcours du tableau
	{
		//printf("%c", tab_texte[i]); //Affichage du tableau

		// condition pour enlever la ponctuation avec l'ascii
		if ((tab_texte[i] >= 30) && (tab_texte[i] <= 39))
			i++;
		else {
			compteur_lettre++; //Comptage du nombre de lettres
			i++;
		}

	}
	printf("%d lettres", compteur_lettre);
}
