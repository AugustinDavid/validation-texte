/*
 * Comptage_lettre_dans_fichier_P2.c
 *
 *  Created on: 16 sept. 2019
 *      Author: daugustin
 */

/*
 * p1_obj1.c
 *
 *  Created on: 1 avr. 2019
 *      Author: daugustin
 */

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include<string.h>

//D'une manière général faire attention à mon indentation
//ATTENTION A L'INDENTATION A LA DECLARATION
//char tab_texte[];
/*"Qu'est-ce qu'un processeur ARM ?\n"
 "C'est un type de processeur particulier dont l'agencement des composants électroniques permet"
 "une taille réduite. ARM est l'acronyme de Advanced Risk Machine. A l'origine, le A de ARM"
 "signifiait Acorn, le nom de la société qui a équipé pour la première fois un ordinateur avec un "
 "processeur ARM, en 1987. Depuis, l'architecture ARM a rencontré un succès qui ne se dément "
 "pas, notamment ces dernières années. Des processeurs ARM, on en trouve dans tous les"
 "smartphones récents : iPhone 4, Samsung Galaxy S, tout comme dans l'iPad, le Nokia N97 ou le\"
 "Nexus One de Google. Mais la société ARM ltd ne fabrique pas, à proprement parler, les"
 "processeurs. Elle conçoit les architectures des processeurs, leurs plans en quelque sorte. Ce sont"
 "les clients qui, après achat des licences, produisent les processeurs. Par exemple, Samsung"
 "fabrique un processeur ARM pour ses téléphones haut de gamme (Samsung Galaxy S et Wave),"
 "reposant sur l'architecture ARM Cortex-A8, cadencée à 1 GHz. Le processeur Apple A4, qui"
 "équipe les iPhone 4 et les iPad, utilise exactement la même architecture Cortex-A8. Ces “ petits”"
 "processeurs connaissent un tel succès qu'ils évoluent très rapidement : Samsung a déjà annoncé"
 "le remplaçant de Cortex-A8 ; celui-ci répond au nom de Cortex-A9 et intègre deux cœurs, comme"
 "dans les PC. Quant au Cortex-A15, qui devrait être disponible dans une vingtaine de mois, on sait"
 "déjà qu'il s'agira d'un processeur quatre cœurs cadencé à 2,5 GHz et basse consommation ! Un tel"
 "processeur devrait avoir des performances similaires à celles d'un ordinateur portable très haut de"
 "gamme, alors qu'il est prévu pour être embarqué dans un téléphone de seulement quelques"
 "millimètres d'épaisseur.\n";*/

int i = 0;
int j = 0;
char fichier;
int compteur_voyelle = 0;
int compteur_consonne = 0;
int compteur_lettre = 0;
char tab_texte[256];
int caractere_lu_getc = 0;
int compteur_z = 0;

int main() {
// recuperation d'un fichier texte .txt pour le mettre dans un tableau

	FILE* fichier = NULL;

	fichier = fopen("texte_support.txt", "r");

	if (fichier == NULL){
		printf("impossible de trouver le fichier");
	}

	if (fichier != NULL) {
		//boucle pour faire la lecture des caractères un par un
		do {
			caractere_lu_getc = fgetc(fichier); //on met le caractere qu'on est entrain de lire dans une variable
			tab_texte[j] = caractere_lu_getc; //on met le résultat de la variable dans le tableau à l'index j
			j++; //on passe à l'index suivant
		} while (caractere_lu_getc != EOF); //tant que le fichier ne renvoie pas End Of File(EOF)
	}

	while (tab_texte[i] != '\0') //parcours du tableau

	{
		printf("%c", tab_texte[i]); //Affichage du tableau

		//decréméntation du compteur de lettre pour les chiffres avec un switch
		switch (tab_texte[i]) {
		case '1':
			compteur_lettre--;
			break;
		case '2':
			compteur_lettre--;
			break;
		case '3':
			compteur_lettre--;
			break;
		case '4':
			compteur_lettre--;
			break;
		case '5':
			compteur_lettre--;
			break;
		case '6':
			compteur_lettre--;
			break;
		case '7':
			compteur_lettre--;
			break;
		case '8':
			compteur_lettre--;
			break;
		case '9':
			compteur_lettre--;
			break;
		}

		//comptage des voyelles avec un switch à mettre dans la boucle sinon ca ne parcours rien
		switch (tab_texte[i]) {
		case 'a':
		case 'A':
		case (char) 'à':
			compteur_lettre++;
			compteur_voyelle++;
			break;

		case 'e':
		case 'E':
		case (char) 'é':
		case (char) 'è':
		case (char) 'ê':
			compteur_voyelle++;
			compteur_lettre++;
			break;

		case 'i':
		case 'I':
			compteur_voyelle++;
			compteur_lettre++;
			break;

		case 'o':
		case 'O':
			compteur_voyelle++;
			compteur_lettre++;
			break;

		case 'u':
		case 'U':
		case (char) 'ù':
			compteur_voyelle++;
			compteur_lettre++;
			break;
		case 'y':
		case 'Y':
			compteur_voyelle++;
			compteur_lettre++;
		}

		//comptage des consonne avec un switch
		switch (tab_texte[i]) {
		case 'b':
		case 'B':
			compteur_consonne++;
			compteur_lettre++;
			break;
		case 'c':
		case 'C':
			compteur_consonne++;
			compteur_lettre++;
			break;
		case 'd':
		case 'D':
			compteur_consonne++;
			compteur_lettre++;
			break;
		case 'f':
		case 'F':
			compteur_consonne++;
			compteur_lettre++;
			break;
		case 'g':
		case 'G':
			compteur_consonne++;
			compteur_lettre++;
			break;
		case 'h':
		case 'H':
			compteur_consonne++;
			compteur_lettre++;
			break;
		case 'j':
		case 'J':
			compteur_consonne++;
			compteur_lettre++;
			break;
		case 'k':
		case 'K':
			compteur_consonne++;
			compteur_lettre++;
			break;
		case 'l':
		case 'L':
			compteur_consonne++;
			compteur_lettre++;
			break;
		case 'm':
		case 'M':
			compteur_consonne++;
			compteur_lettre++;
			break;
		case 'n':
		case 'N':
			compteur_consonne++;
			compteur_lettre++;
			break;
		case 'p':
		case 'P':
			compteur_consonne++;
			compteur_lettre++;
			break;
		case 'q':
		case 'Q':
			compteur_consonne++;
			compteur_lettre++;
			break;
		case 'r':
		case 'R':
			compteur_consonne++;
			compteur_lettre++;
			break;
		case 's':
		case 'S':
			compteur_consonne++;
			compteur_lettre++;
			break;
		case 't':
		case 'T':
			compteur_consonne++;
			compteur_lettre++;
			break;
		case 'v':
		case 'V':
			compteur_consonne++;
			compteur_lettre++;
			break;
		case 'w':
		case 'W':
			compteur_consonne++;
			compteur_lettre++;
			break;
		case 'x':
		case 'X':
			compteur_consonne++;
			compteur_lettre++;
			break;
		case 'z':
		case 'Z':
			compteur_consonne++;
			compteur_lettre++;
			compteur_z++;
			break;
		}
		i++; //incrémenter i a la fin de la boucle pour faire le traitement sur un caractère est passé au suivant

	}

	printf("nombre voyelle %d\n", compteur_voyelle);
	printf("nombre de consonne %d\n", compteur_consonne);
	printf("nombre de lettre est de %d\n", compteur_lettre);
	printf("nombre de z %d", compteur_z);
	return 0;

}
