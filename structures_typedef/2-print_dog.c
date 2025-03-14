#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Affiche une structure de type struct dog
 * @d: Pointeur vers la structure à afficher
 *
 * Description: Cette fonction affiche les informations d'un chien.
 * Si un élément est NULL, elle affiche "(nil)" à la place.
 * Si `d` est NULL, la fonction ne fait rien.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
