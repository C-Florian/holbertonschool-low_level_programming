#include "main.h"

/**
 * print_triangle - Prints a triangle followed by a new line.
 * @size: The size of the triangle.
 *
 * Description: Uses '#' to form the triangle. If size is 0 or less,
 * only a new line is printed.
 */
void print_triangle(int size)
{
	int i, j, spaces;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		/* Print spaces */
		for (spaces = size - i; spaces > 0; spaces--)
			_putchar(' ');

		/* Print '#' */
		for (j = 1; j <= i; j++)
			_putchar('#');

		_putchar('\n');
	}
}
