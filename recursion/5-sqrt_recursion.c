#include "main.h"

/**
 * _sqrt_helper - Helper function to find the square root recursively.
 * @n: The number to find the square root of.
 * @i: The current divisor being tested.
 *
 * Return: The natural square root of n, or -1 if n has no natural square root.
 */
int _sqrt_helper(int n, int i)
{
	if (i * i > n) /* Si i^2 dépasse n, pas de racine entière */
		return (-1);
	if (i * i == n) /* Si i^2 est égal à n, on a trouvé la racine */
		return (i);

	return (_sqrt_helper(n, i + 1)); /* Incrémentation de i pour tester */
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to compute the square root of.
 *
 * Return: The natural square root of n, or -1 if n does not have one.
 */
int _sqrt_recursion(int n)
{
	if (n < 0) /* Gestion des nombres négatifs */
		return (-1);

	return (_sqrt_helper(n, 0)); /* Appel à la fonction auxiliaire */
}
