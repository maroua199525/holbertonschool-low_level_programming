#include "holberton.h"
/**
 *clear_bit - clear bit of binary number
 *@n: unsigned long int;
 *@index: unsigned int;
 *Return: bit
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if ((sizeof(unsigned long int) * 8) <= index)
	{
		return (-1);
	}
	*n = (*n & ~(1 << index));
	return (1);
}
