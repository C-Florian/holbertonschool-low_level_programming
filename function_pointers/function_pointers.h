#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h> /* Pour size_t */
#include <stdlib.h> /* Pour malloc, free, exit */

/* Prototype de la fonction qui imprime un nom */
void print_name(char *name, void (*f)(char *));

/* Prototype de la fonction qui exécute une fonction donnée sur chaque élément d'un tableau */
void array_iterator(int *array, size_t size, void (*action)(int));

/* Prototype de la fonction qui cherche un entier */
int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNCTION_POINTERS_H */
