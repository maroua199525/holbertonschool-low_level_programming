#include <stdio.h>
/**
*multiply_5_3 - count multiple
*
* Return:void
*/
int multiply_5_3(void)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
