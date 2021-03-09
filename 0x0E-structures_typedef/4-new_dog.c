/**
 *_strlen - print length
 *@s:string
 * Return: m
 */
int _strlen(char *s)
{
	int m;

	if (*s == '\0')
		return (0);
	m = 1 + _strlen(s + 1);
	return (m);
}
/**
 *_strcpy - copies the string
 *@src:string
 *@dest:string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
		;
	j = i;
	for (i = 0; i <= j; i++)
		dest[i] = src[i];
	return (dest);
}
#include "dog.h"
#include <stdlib.h>
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 *new_dog - describe dog
 *@name:char
 *@age:float
 *@owner:char
 *Return:dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	if (name == NULL)
		dog->name = NULL;
	else
	{
		dog->name = malloc(sizeof(char) * _strlen(name) + 1);
		if (name == NULL)
		{
			free(dog);
			return (NULL);
		}
		else
		dog->name = _strcpy(dog->name, name);
	}
	if (owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	else
	{
		dog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
		if (dog->owner == NULL)
			return (NULL);
		dog->owner = _strcpy(dog->owner, owner);
	}
	dog->age = age;
	return (dog);
}
