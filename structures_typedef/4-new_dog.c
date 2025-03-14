#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplique une chaîne de caractères
 * @str: Chaîne à dupliquer
 *
 * Return: Pointeur vers la nouvelle chaîne ou NULL si échec.
 */
char *_strdup(char *str)
{
	char *dup;
	size_t len;

	if (str == NULL)
		return (NULL);

	len = strlen(str) + 1;
	dup = malloc(len);
	if (dup == NULL)
		return (NULL);

	return (memcpy(dup, str, len));
}

/**
 * new_dog - Crée une nouvelle structure dog_t
 * @name: Nom du chien
 * @age: Âge du chien
 * @owner: Propriétaire du chien
 *
 * Return: Pointeur vers la nouvelle structure ou NULL si échec.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = _strdup(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = _strdup(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->age = age;

	return (dog);
}
