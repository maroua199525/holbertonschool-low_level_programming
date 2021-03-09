#include "dog.h"
#include <stdio.h>
/**
 *print_dog - print a dog
 *@d:struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
	printf("Age: %.6f\n", d->age);
}
