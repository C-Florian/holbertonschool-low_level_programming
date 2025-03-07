#include <stdio.h>
#include "main.h"

/**
 * main - Affiche tous les arguments reçus
 * @argc: Nombre d'arguments passés au programme
 * @argv: Tableau contenant les arguments sous forme de chaînes de caractères
 *
 * Return: 0 en cas de succès
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
