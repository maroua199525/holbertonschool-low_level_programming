#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - concat two strings
 *@s1:char;
 *@s2:char;
 *@n:unsigned int;
 *Return: str;
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2, m;
	char *str;

	if (s1 == NULL)
		len1 = 0;
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	if (s2 == NULL)
		len2 = 0;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	if (n >= len2)
		m = len2;
	else
		m = n;
	str = malloc(sizeof(char) * (len1 + m + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (j = 0; j < m; j++)
		str[len1 + j] = s2[j];
	str[len1 + m] = '\0';
	return (str);
}
