#include "main.h"

/**
 * print_square - Prints a square of size 'size' using the character '#'.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#'); /* Print the '#' character */
		}
		_putchar('\n'); /* Move to the next line after each row */
	}
}

