#include "function_pointers.h"

/**
 * int_index - Searches for an integer using a comparison function
 * @array: The array of integers
 * @size: The number of elements in the array
 * @cmp: The function pointer used for comparison
 * Return: The index of the first match, or -1 if no match or invalid input
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
