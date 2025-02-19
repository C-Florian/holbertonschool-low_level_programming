#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0'); /* Print digit */
		if (num < 9)
		{
			putchar(','); /* Print comma */
			putchar(' '); /* Print space */
		}
	}
	putchar('\n'); /* Print newline */
	return (0);
}

