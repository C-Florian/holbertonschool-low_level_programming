#include "main.h"

/**
 * _isalpha - Vérifie si un caractère est une lettre (minuscule ou majuscule)
 * @c: Le caractère à vérifier
 *
 * Return: 1 si c est une lettre, 0 sinon
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
