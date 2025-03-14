#ifndef DOG_H
#define DOG_H

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

/* Prototype de la fonction d'initialisation */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
