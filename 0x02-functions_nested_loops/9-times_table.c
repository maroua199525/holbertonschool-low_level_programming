#include "holberton.h"
/**
* times_table - print the table of nine
*
* Return
*/
void times_table(void)
{
int i, j, r;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
r = (i * j);
if (r < 10)
{
_putchar(r);
}
else
{
_putchar(r / 10);
_putchar(r % 10);
}
if (r != 81)
{
_putchar(',');
_putchar(' ');
}
}
putchar ('\n');
}
}
