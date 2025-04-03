#include "lists.h"

/**
 * free_dlistint - Libère la mémoire de la liste doubly chaînée
 * @head: Pointeur vers la tête de la liste
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
