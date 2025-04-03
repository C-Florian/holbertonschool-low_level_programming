#include "lists.h"

/**
 * dlistint_len - Renvoie le nombre d'éléments dans une liste doubly chaînée
 * @h: Pointeur vers la tête de la liste
 *
 * Return: Le nombre d'éléments de la liste
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
