#include "holberton.h"
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int _isalpha(int c)
{
if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
{
return (1);
}
else
{
return (0);
}





