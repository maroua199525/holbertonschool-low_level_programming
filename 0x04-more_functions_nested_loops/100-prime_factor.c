#include<stdio.h>
/**
 *main - print prime factors
 *
 *Return: 0
*/
int main(void)
{
	unsigned long int n, i;

	n = 612852475143;
	for (i = 3; i <= (n / 2); i += 2)
	{
		while (n % i == 0)
		{
			n = (n / i);
		}
	}
		printf("%lu\n", n);
		return (0);
}
