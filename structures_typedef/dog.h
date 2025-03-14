#ifndef DOG_H
#define DOG_H

#include <stddef.h>

/**
 * struct dog - Structure représentant un chien
 * @name: Nom du chien
 * @age: Âge du chien
 * @owner: Propriétaire du chien
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Nouveau type dog_t comme alias pour struct dog */
typedef struct dog dog_t;

/* Prototypes des fonctions */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
