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
	int i, S;
	int cents[5] = {1, 2, 5, 10, 25};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			if (atoi(argv[1]) < 0)
				printf("0\n");
			else if (atoi(argv[1]) >= cents[i])
				S = (atoi(argv[1]) / cents[i]) + (atoi(argv[1]) % cents[i]);
		}
	}
	printf("%d\n", S);
	return (0);
}
