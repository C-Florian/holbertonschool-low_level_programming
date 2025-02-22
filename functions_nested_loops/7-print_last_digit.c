#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The integer to extract the last digit from
 *
 * Return: The last digit of n
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10; /* Extract the last digit */

	if (last_digit < 0)
		last_digit = -last_digit; /* Ensure it's positive */

	_putchar(last_digit + '0'); /* Convert to character and print */

	return (last_digit);
}
