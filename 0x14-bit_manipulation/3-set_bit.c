#include "holberton.h"
/**
 *set_bit - get bit of binary number
 *@n: unsigned long int;
 *@index: unsigned int;
 *Return: bit
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if ((sizeof(unsigned long int) * 8) <= index)
	{
		return (-1);
	}
	*n = *n | (1 << index);
	return (1);
}
