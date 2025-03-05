#include "main.h"

/**
 * check_prime - Vérifie si un nombre est premier en testant les diviseurs.
 * @n: Le nombre à vérifier.
 * @i: Le diviseur testé.
 *
 * Return: 1 si n est premier, sinon 0.
 */
int check_prime(int n, int i)
{
	if (n <= 1) /* Les nombres <= 1 ne sont pas premiers */
		return (0);
	if (i * i > n) /* Aucun diviseur trouvé, n est premier */
		return (1);
	if (n % i == 0) /* Si n est divisible par i, ce n'est pas un nombre premier */
		return (0);

	return (check_prime(n, i + 1)); /* Tester le prochain diviseur */
}

/**
 * is_prime_number - Vérifie si un nombre est premier.
 * @n: Le nombre à vérifier.
 *
 * Return: 1 si n est un nombre premier, sinon 0.
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2)); /* Démarrer avec 2 comme premier diviseur */
}
