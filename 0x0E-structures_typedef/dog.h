#ifndef HEADER_FILE
#define HEADER_FILE
/**
 *struct dog - print describe dog
 *@name: char
 *@age:float
 *@owner:char
 */
struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
struct dog_t *new_dog(char *name, float age, char *owner);
void free_dog(struct dog_t *d);
int _putchar(char c);
#endif