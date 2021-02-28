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
	int cents[5] = {25, 10, 5, 2, 1};
	int i, S, piece;

	S = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	piece = atoi(argv[1]);
	if (piece <= 0)
		printf("0\n");
	for (i = 0; i < 5; i++)
	{
		S = S + (piece / cents[i]);
		piece = piece % cents[i];
	}

	printf("%d\n", S);
	return (0);
}
