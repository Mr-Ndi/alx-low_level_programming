# include "main.h"
# include <stdlib.h>

/**
 * str_concat - function to concatenates two strings
 * @s1: first string
 * @s2:second string
 *
 * Return: Null if it fails otherwise concatenated string
 */

char *str_concat(char *s1, char *s2)
{
int j = 0, k = 0,l = 0,i = 0;
char * arry;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i] != '\0')
l++;
while (s2[j] != '\0')
k++;
arry = malloc(((l + k) + 1) *sizeof(char));
while (i < l)
{
arry[i] = s1[i];
i++;
}
while (j < k)
{
arry[i] = s2[i];
k++;
i++;
}
return (arry);
}
