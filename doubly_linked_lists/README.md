# Doubly Linked Lists - Projet en C

## Description

Ce projet implémente différentes opérations sur les listes doublement chaînées en langage C.  
Une liste doublement chaînée est une structure de données dans laquelle chaque nœud contient un pointeur vers l'élément suivant et l'élément précédent, ce qui permet une navigation bidirectionnelle.

## Structure de données

Le projet utilise la structure suivante définie dans `lists.h` :

```c
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

## Fonctions implémentées

| Fonction | Description |
|----------|------------|
| `print_dlistint` | Affiche tous les éléments de la liste |
| `dlistint_len` | Retourne le nombre d'éléments dans la liste |
| `add_dnodeint` | Ajoute un nœud au début de la liste |
| `add_dnodeint_end` | Ajoute un nœud à la fin de la liste |
| `free_dlistint` | Libère toute la liste |
| `get_dnodeint_at_index` | Récupère un nœud à un index donné |
| `sum_dlistint` | Retourne la somme de tous les éléments de la liste |
| `insert_dnodeint_at_index` | Insère un nœud à un index donné |
| `delete_dnodeint_at_index` | Supprime un nœud à un index donné |

## Compilation et Exécution

Pour compiler les fichiers `.c` avec `gcc`, utilisez la commande suivante :

```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o executable
```

Exemple d'exécution avec un fichier de test `main.c` :

```sh
./executable
```

## Exemples d'utilisation

Ajout d'un nœud en début de liste :

```c
dlistint_t *head = NULL;
add_dnodeint(&head, 42);
print_dlistint(head);
```

Ajout d'un nœud en fin de liste :

```c
add_dnodeint_end(&head, 98);
print_dlistint(head);
```

## Auteur

Projet réalisé par Chéreau Florian  dans le cadre de Holberton School.


