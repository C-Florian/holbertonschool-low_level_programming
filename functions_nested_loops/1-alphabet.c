#include "main.h"

/**
 * print_alphabet - Affiche l'alphabet en minuscule suivi d'un saut de ligne
 */
void print_alphabet(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n"; // Alphabet avec saut de ligne
	int i = 0;

	// Affichage avec _putchar (seule solution pour respecter la contrainte de 2 utilisations)
	while (alphabet[i] != '\0')
	{
		_putchar(alphabet[i]);
		i++;
	}
}

