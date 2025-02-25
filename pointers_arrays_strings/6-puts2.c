#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 *         starting with the first character.
 * @str: Pointer to the string
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0') /* Loop until end of string */
	{
		_putchar(str[i]);
		i += 2; /* Move to the next alternate character */
	}
	_putchar('\n'); /* Print newline at the end */
}

