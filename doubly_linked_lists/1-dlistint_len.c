#include "lists.h"

/**
 * dlistint_len - Compte les éléments d'une liste doubly chaînée
 * @h: Pointeur vers la tête de la liste
 *
 * Return: Nombre d'éléments dans la liste
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
