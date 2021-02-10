#include<stdio.h>
/**
 *main - print Fibonacci numbers
 *
 * Return:void
 */
int main(void)
{
	long int  i, t1, t2, nextTerm;

	t1 = 0;
	t2 = 1;

		for (i = 0; i <= 97; ++i)
		{
			nextTerm = t1 + t2;
			t1 = t2;
			t2 = nextTerm;
			if (i != 97)
				printf("%ld, ", nextTerm);
			else
				printf("%ld\n", nextTerm);
		}
		return (0);
}
