#include <stdio.h>
/**
 *main - fizz buzz
 *
 * Return:void
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("Fizz Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
	if (i != 100)
		printf(" ");
	}
		printf("\n");
	return (0);
}
