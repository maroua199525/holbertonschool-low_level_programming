#include "3-calc.h"
#include <stdio.h>
#include <stdio.h>
/**
 *main - print the result
 *@argc:int
 *@argv[]:char
 *Return:int
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char operator;
	
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(agrv[1]);
	num2 = atoi[agrv[3]);
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exist(99);
	}
	if (operator != '/' || operator != '%' && num2 == 0)
	{
		printf("Error\n"); 
		exit(100);
	}
	result = 
	printf("%d\n", result);
	return (0);
}
