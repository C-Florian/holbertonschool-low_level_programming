#include "main.h"

/**
 * print_alphabet_x10 - Entry of the function
 *
 * Description:
 */

void print_alphabet_x10(void)
{
	int b = 0;

	while (b <= 9)
	{
		char a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}

		_putchar('\n');
		b++;
	}

}

