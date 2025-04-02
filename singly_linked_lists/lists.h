#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - Structure d'une liste chaînée simplement liée
 * @str: Chaîne de caractères (string) allouée dynamiquement
 * @len: Longueur de la chaîne de caractères
 * @next: Pointeur vers le prochain nœud de la liste
 *
 * Description: Structure représentant une liste simplement chaînée
 * utilisée dans le projet de listes chaînées en C.
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* Prototypes des fonctions */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* LISTS_H */
