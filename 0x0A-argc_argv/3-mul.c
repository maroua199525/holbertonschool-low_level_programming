#include <stdlib.h>
#include <stdio.h>
/**
 * main - print name program
 *@argc:integer
 *@argv:string
 * Return:0
 */
int main(int argc, char *argv[])
{
	int i, P;

	P = 1;
	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			P = P * atoi(argv[i]);
		}
		printf("%d\n", P);
	}
	else
		printf("Error\n");
	return (0);
}
