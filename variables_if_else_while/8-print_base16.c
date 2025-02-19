#include <stdio.h>

/**
 * main - Prints all numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char hex;

	/* Print numbers 0-9 */
	for (num = 0; num < 10; num++)
		putchar(num + '0');

	/* Print letters a-f */
	for (hex = 'a'; hex <= 'f'; hex++)
		putchar(hex);

	putchar('\n'); /* Print newline */

	return (0);
}

