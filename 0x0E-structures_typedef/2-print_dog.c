B#include "dog.h"
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
	if (d->age == NULL)
		printf("Age: (nil)\n");
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	printf("name: %s\n", d->Name);
	printf("age: %f\n", d->age);
	printf("owner: %s\n", d->owner);
}
