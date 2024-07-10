#include "dog.h"
#include <stdlib.h>
/**
 * _strncpy - copia
 * @dest: dest
 * @src: src
 * @n: n
 * Return: retorno
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/**
 * new_dog - perro nuevo
 *
 * @name: nombre
 * @age: edad
 * @owner: duenho
 * Return: retorno
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *newname;
	char *newowner;
	int ln;
	int lo;
	dog_t *p;

	for (ln = 0; name[ln] != '\0'; ln++)
	{}

	for (lo = 0; owner[lo] != '\0'; lo++)
	{}

	p = malloc(sizeof(dog_t));
	if (p == NULL)
	{
		return (NULL);
	}
	newname = malloc(sizeof(char) * (ln + 1));
	if (newname == NULL)
	{
		free(p);
		return (NULL);
	}

	_strncpy(newname, name, ln + 1);

	newowner = malloc(sizeof(char) * (lo + 1));
	if (newowner == NULL)
	{
		free(newname);
		free(p);
		return (NULL);
	}

	_strncpy(newowner, owner, lo + 1);
	p->name = newname;
	p->age = age;
	p->owner = newowner;
	return (p);
}
