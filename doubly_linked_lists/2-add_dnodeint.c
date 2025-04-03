#include "lists.h"

/**
 * add_dnodeint - Ajoute un nouveau nœud au début de la liste
 * @head: Pointeur vers la tête de la liste
 * @n: Valeur à insérer dans le nouveau nœud
 *
 * Return: Le nouvel élément de la liste ou NULL en cas d'erreur
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
