#include "main.h"
#include <limits.h> /* Pour INT_MAX et INT_MIN */

/**
 * _atoi - Convertit une chaîne de caractères en entier.
 * @s: La chaîne à convertir.
 *
 * Return: L'entier converti, ou 0 si aucun chiffre trouvé.
 */
int _atoi(char *s)
{
	int sign = 1, num = 0, found_digit = 0;
	int prev_num;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s == '+')
			sign *= 1;
		else if (*s >= '0' && *s <= '9')
		{
			prev_num = num;
			num = num * 10 + (*s - '0');

			/* Vérifier dépassement de INT_MAX */
			if (num / 10 != prev_num)
			{
				if (sign == 1)
					return (INT_MAX);
				else
					return (INT_MIN);
			}
			found_digit = 1;
		}
		else if (found_digit)
			break;
		s++;
	}

	return (num * sign);
}
