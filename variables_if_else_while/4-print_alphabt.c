#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase except 'q' and 'e',
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	/* Print lowercase alphabet except 'q' and 'e' */
	for (letter = 'a'; letter <= 'z'; letter++)
		if (letter != 'q' && letter != 'e')
			putchar(letter);

	/* Print new line */
	putchar('\n');

	return (0);
}

