#include "lists.h"

/**
 * delete_dnodeint_at_index - Supprime un nœud à un index spécifique
 * @head: Pointeur vers la tête de la liste
 * @index: Index du nœud à supprimer
 *
 * Return: 1 si succès, -1 si échec
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}

	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (-1);

	temp->prev->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	free(temp);

	return (1);
}

