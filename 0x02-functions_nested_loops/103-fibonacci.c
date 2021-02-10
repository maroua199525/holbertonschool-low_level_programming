#include<stdio.h>
/**
*main - print Fibonacci numbers
*
* Return:void
*/
int main(void)
{
	long P, t1, Sum, t2, nextTerm;

	t1 = 0;
	t2 = 1;
	P = 4000000;
	Sum = 0;
	while (Sum < P)
	{
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
		if ((nextTerm % 2) == 0)
		{
		Sum = Sum  + nextTerm;
		}
	}
		printf("%ld\n", Sum);
		return (0);
}
