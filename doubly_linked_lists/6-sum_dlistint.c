#include "lists.h"

/**
 * sum_dlistint - Calcule la somme de toutes les valeurs de la liste
 * @head: Pointeur vers la tête de la liste
 *
 * Return: La somme des valeurs de la liste
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
