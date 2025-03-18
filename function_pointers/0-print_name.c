#include "function_pointers.h"

/**
 * print_name - Prints a name using a given function
 * @name: The name to print
 * @f: A function pointer that takes a char * as argument
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
