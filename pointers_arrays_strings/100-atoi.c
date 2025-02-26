#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer, or 0 if no numbers are found.
 */
int _atoi(char *s)
{
	int sign = 1, num = 0, found_digit = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s == '+')
			sign *= 1;
		else if (*s >= '0' && *s <= '9')
		{
			num = num * 10 + (*s - '0');
			found_digit = 1;
		}
		else if (found_digit)
			break;
		s++;
	}

	return (num * sign);
}
