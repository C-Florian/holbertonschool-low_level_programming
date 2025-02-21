#include "main.h"

/**
 * print_sign - Affiche le signe d'un nombre.
 * @n: Le nombre dont il faut afficher le signe.
 *
 * Return: 1 et affiche '+' si n est supérieur à 0,
 *         0 et affiche '0' si n est égal à 0,
 *         -1 et affiche '-' si n est inférieur à 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');  /* Affiche '+' si n est positif */
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');  /* Affiche '0' si n est égal à zéro */
		return (0);
	}
	else
	{
		_putchar('-');  /* Affiche '-' si n est négatif */
		return (-1);
	}
}
