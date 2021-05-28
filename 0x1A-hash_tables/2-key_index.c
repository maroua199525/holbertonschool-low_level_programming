#include "hash_tables.h"
/**
*key_index - function that gives the index of a key.
*@key: const unsigned char
*@size:unsigned long int
*Return: the index at which the key/value pair should be stored in the array.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int c, index;

	c = hash_djb2(key);
	index = c % size;
	return (index);
}
