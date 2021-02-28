#include <ctype.h>
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
	int i, j, Sum;

	Sum = 0;
	if (argc == 1)
		printf("0\n");
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				{
					printf("Error\n");
					return (1);
				}
			}
			Sum = Sum + atoi(argv[i]);
		}
		printf("%d\n", Sum);
	}
	return (0);
}
