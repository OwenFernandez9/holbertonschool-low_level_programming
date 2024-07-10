#include "dog.h"
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

	for (ln = 0; newname[ln] != '\0'; ln++)
	{}

	for (ln = 0; newname[ln] != '\0'; ln++)
	{}

	p = malloc(sizeof(dog_t);
	if (p == NULL)
	{
		return (NULL);
	}
	newname = strncpy(name);
	newname = malloc(sizeof(char) * ln);
	if (newname == NULL)
	{
		free(p);
		return (NULL);
	}
	newowner = strncpy(owner);
	newowner = malloc(sizeof(char) * lo);
	if (newowner == NULL)
	{
		free(newname);
		free(p);
		return (NULL);
	}
	p->name = newname;
	p->age = age;
	p->owner = newowner;
	return (p);
}
