#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Crée un nouveau chien avec une copie de name et owner.
 * @name: Nom du chien (chaîne de caractères)
 * @age: Âge du chien (float)
 * @owner: Propriétaire du chien (chaîne de caractères)
 *
 * Return: Pointeur vers le nouveau chien, ou NULL en cas d'échec.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr_dog;
	int dogname, dogowner, i;

	if (!name || !owner)
		return (NULL);

	ptr_dog = malloc(sizeof(dog_t));
	if (!ptr_dog)
		return (NULL);

	for (dogname = 0; name[dogname]; dogname++)
		;
	for (dogowner = 0; owner[dogowner]; dogowner++)
		;

	ptr_dog->name = malloc(dogname + 1);
	ptr_dog->owner = malloc(dogowner + 1);

	if (!ptr_dog->name || !ptr_dog->owner)
	{
		free(ptr_dog->name);
		free(ptr_dog->owner);
		free(ptr_dog);
		return (NULL);
	}

	for (i = 0; i <= dogname; i++) /* Copie name */
		ptr_dog->name[i] = name[i];

	ptr_dog->age = age;

	for (i = 0; i <= dogowner; i++) /* Copie owner */
		ptr_dog->owner[i] = owner[i];

	return (ptr_dog);
}
