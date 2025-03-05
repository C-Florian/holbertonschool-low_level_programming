#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to compute the factorial of.
 *
 * Return: The factorial of n, or -1 if n is negative.
 */
int factorial(int n)
{
	if (n < 0) /* Vérification d'une valeur négative */
		return (-1);
	if (n == 0) /* Cas de base : 0! = 1 */
		return (1);

	return (n * factorial(n - 1)); /* Appel récursif */
}
