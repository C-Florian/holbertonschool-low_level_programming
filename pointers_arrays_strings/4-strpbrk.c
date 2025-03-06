#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to search.
 * @accept: The characters to look for.
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	if (!s || !accept) /* Handle NULL cases */
		return (0);

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i]) /* If a match is found */
				return (s);
		}
		s++; /* Move to next character in s */
	}

	return (0); /* Return NULL if no match is found */
}
