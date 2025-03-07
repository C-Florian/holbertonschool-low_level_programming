#include <stdio.h>
#include "main.h"

/**
 * main - Affiche le nombre d'arguments passés au programme
 * @argc: Nombre d'arguments passés au programme
 * @argv: Tableau contenant les arguments (non utilisé ici)
 *
 * Return: 0 en cas de succès
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
