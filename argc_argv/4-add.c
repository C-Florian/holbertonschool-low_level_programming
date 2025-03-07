#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * is_number - Vérifie si une chaîne ne contient que des chiffres
 * @str: Chaîne de caractères à vérifier
 *
 * Return: 1 si c'est un nombre valide, 0 sinon
 */
int is_number(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}

/**
 * main - Additionne des nombres positifs passés en arguments
 * @argc: Nombre d'arguments
 * @argv: Tableau des arguments sous forme de chaînes de caractères
 *
 * Return: 0 si succès, 1 si erreur
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	/* Si aucun nombre n'est fourni, afficher 0 */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* Parcours des arguments */
	for (i = 1; i < argc; i++)
	{
		if (!is_number(argv[i])) /* Vérifie si chaque argument est un nombre */
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]); /* Convertit et ajoute le nombre */
	}

	/* Affichage du résultat */
	printf("%d\n", sum);

	return (0);
}
