#include "lists.h"

/**
 * get_dnodeint_at_index - Retourne le nœud à un index spécifique
 * @head: Pointeur vers la tête de la liste
 * @index: Index du nœud à récupérer
 *
 * Return: Le nœud à l'index donné, ou NULL si l'index est invalide
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);

		head = head->next;
		i++;
	}

	return (NULL);
}
