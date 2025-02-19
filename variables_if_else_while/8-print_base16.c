#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase, followed by a new line
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

	/* Print new line */
	putchar('\n');

	return (0);
}

