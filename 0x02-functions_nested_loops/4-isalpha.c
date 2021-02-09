#include "holberton.h"
/**
* int _isalpha(int c)
* @c: the anteger
* Return either 0 or 1;
*/
int _isalpha(int c)
{
if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
{
return (1);
}
else
{
return (0);
}
}






