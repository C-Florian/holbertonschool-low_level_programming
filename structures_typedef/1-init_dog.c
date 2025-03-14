#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initialise une variable de type struct dog
 * @d: Pointeur vers la structure à initialiser
 * @name: Nom du chien
 * @age: Âge du chien
 * @owner: Propriétaire du chien
 *
 * Description: Cette fonction initialise une structure de type dog
 * avec les valeurs fournies. Si le pointeur `d` est NULL, la fonction
 * ne fait rien.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
