#include <stdio.h>
#include "main.h"

/**
 * main - Programme qui affiche son propre nom
 * @argc: Nombre d'arguments passés au programme
 * @argv: Tableau contenant les arguments sous forme de chaînes de caractères
 *
 * Return: 0 en cas de succès
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
