#include <stdio.h>

/**
 * main - Prints all single-digit numbers of base 10 starting from 0,
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	/* Print numbers 0 to 9 */
	for (num = 0; num < 10; num++)
		printf("%d", num);

	/* Print new line */
	printf("\n");

	return (0);
}

