#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - finction to concatnate n character to the string
 * @s1: The string given
 * @s2: The second string to concatnate
 * @n: The number of bytes to concatnate
 * Return: the pointer to concatnated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, a = 0;
unsigned int b = 0;
unsigned int len2 = 0;
char *arr;

while (s1 && s1[len1])
{
len1++;
}
while (s2 && s2[len2])
{
len2++;
}
if (n < len2)
{
	arr = malloc((len1 + n + 1) * sizeof(char));
}
else
{
	arr = malloc((len1 + len2 + 1) * sizeof(char));
}
if (!arr)
{
return (NULL);
}

while (a < len1)
{
	arr[a] = s1[a];
	a++;
}
while (n < len2 && a < (len1 + n))
	arr[a++] = s2[b++];
while (n >= len2 && a < (len1 + len2))
{
arr[a++] = s2[b++];
}
arr[a] = '\0';
return (arr);
}
