#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	/* Print numbers 0-9 with commas and spaces in between */
	for (num = 0; num < 9; num++)
	{
		putchar(num + '0');  /* Print the number */
		putchar(',');        /* Print comma */
		putchar(' ');        /* Print space */
	}

	putchar('9');  /* Print last number (9) without comma */
	putchar('\n');  /* Print new line */

	return (0);
}

