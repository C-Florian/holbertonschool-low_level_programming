#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - Prints numbers from 1 to 100 with Fizz-Buzz logic.
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - Calls the fizz_buzz function.
 * Return: Always 0 (Success).
 */
int main(void)
{
	fizz_buzz();
	return (0);
}
