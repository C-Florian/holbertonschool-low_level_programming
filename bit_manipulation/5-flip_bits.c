#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip
 *             to get from one number to another
 * @n: First number
 * @m: Second number
 *
 * Return: Number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned int count = 0;

	xor = n ^ m;

	while (xor)
	{
		count += xor & 1;
		xor >>= 1;
	}

	return (count);
}
