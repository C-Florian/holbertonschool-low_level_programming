#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: Pointer to the string
 */
void puts_half(char *str)
{
	int len = 0, n;

	/* Find the length of the string */
	while (str[len] != '\0')
		len++;

	/* Compute starting index for the second half */
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2 + 1;

	/* Print the second half of the string */
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
