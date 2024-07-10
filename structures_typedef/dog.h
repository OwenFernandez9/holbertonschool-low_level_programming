#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - dog
 *
 * @name: nombre
 * @age: edad
 * @owner: dueÃo
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * struct dog_t - dog
 *
 * @name: nombre
 * @age: edad
 * @owner: dueï¿½o
 */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;
dog_t *new_dog(char *name, float age, char *owner);

#endif
