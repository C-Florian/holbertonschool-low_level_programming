#include "lists.h"

/**
 * add_dnodeint_end - Ajoute un nœud à la fin de la liste
 * @head: Pointeur vers la tête de la liste
 * @n: Valeur à insérer dans le nouveau nœud
 *
 * Return: Le nouvel élément de la liste ou NULL en cas d'erreur
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new_node;
		new_node->prev = temp;
	}

	return (new_node);
}
