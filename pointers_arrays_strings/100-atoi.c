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

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			/* Vérifier si la prochaine opération causera un overflow */
			if (num > (INT_MAX / 10) ||
			    (num == INT_MAX / 10 && (*s - '0') > INT_MAX % 10))
			{
				if (sign == 1)
					return (INT_MAX);
				else
					return (INT_MIN);
			}
			num = num * 10 + (*s - '0');
			found_digit = 1;
		}
		else if (found_digit)
			break;
		s++;
	}

	return (num * sign);
}
