#include "holberton.h"
/**
 *get_bit - get a bit
 *@n:unsigned long int;
 *@index:unsigned int
 *Return: x
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
