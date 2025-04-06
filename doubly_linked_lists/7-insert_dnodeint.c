#include "lists.h"

/**
 * insert_dnodeint_at_index - Insère un nœud à un index spécifique
 * @head: Pointeur vers la tête de la liste
 * @index: Index où insérer le nouveau nœud
 * @n: Valeur du nouveau nœud
 *
 * Return: Le nœud inséré, ou NULL en cas d'erreur
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int index, int n)
{
	dlistint_t *new_node, *temp = *head;
	unsigned int i = 0;

	if (index == 0)
		return (add_dnodeint(head, n));

	while (temp != NULL && i < index - 1)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = temp->next;
	new_node->prev = temp;

	if (temp->next != NULL)
		temp->next->prev = new_node;

	temp->next = new_node;

	return (new_node);
}
