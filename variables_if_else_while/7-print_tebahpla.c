#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;

	/* Print lowercase alphabet in reverse */
	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	/* Print new line */
	putchar('\n');

	return (0);
}

