#include "main.h"

/**
 * _strncpy - Copies a string using at most n bytes.
 * @dest: The destination buffer.
 * @src: The source string.
 * @n: Maximum number of bytes to copy.
 *
 * Return: A pointer to the destination string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy src to dest up to n bytes */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* Pad with null bytes if src is shorter than n */
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}

