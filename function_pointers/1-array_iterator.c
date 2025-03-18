#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter on each element
 * @array: The array of integers
 * @size: The size of the array
 * @action: The function pointer to apply to each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
