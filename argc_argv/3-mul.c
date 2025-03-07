#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Multiplie deux nombres passés en arguments
 * @argc: Nombre d'arguments
 * @argv: Tableau des arguments sous forme de chaînes de caractères
 *
 * Return: 0 si succès, 1 si erreur (nombre d'arguments incorrect)
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	/* Vérifie si deux arguments sont fournis */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* Convertit les arguments en entiers et effectue la multiplication */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	/* Affiche le résultat */
	printf("%d\n", result);

	return (0);
}
