#include <stdio.h>
/**
 *main - print Fibonacci numbers
 *
 * Return:void
 */
int main(void)
{
	int i, t1, t2, nextTerm;

	t1 = 0;
	t2 = 1;

		for (i = 1; i <= n; ++i)
		{
			printf("%d, ", t1);
			nextTerm = t1 + t2;
			t1 = t2;
			t2 = nextTerm;
		}

		return (0);
}
