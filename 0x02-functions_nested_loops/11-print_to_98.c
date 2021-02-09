#include "holberton.h"
#include <stdio.h>
/**
*print_to_98 - print to 98
*@n:integer.
* Return: Always 0.
*/
void print_to_98(int n)
{
	int i;
	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == n)
			{
				printf("%d", n);
			}
			else
			{
			printf("%d", i);
			}
			if (i < 98)
			{
			printf(" ");
			printf(",");
			}
			else
			{
				printf("\n");
			}
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i == n)
			{
				printf("%d", n);
			}
			else
			{
				printf("%d", i);
			}
			if (i > 98)
			{
				printf(" ");
				printf(",");
			}
			else
			{
				printf("\n");
			}
		}
	}
	else
	{
	 printf("98");
	}
return (0);
}
