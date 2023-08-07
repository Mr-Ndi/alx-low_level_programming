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
int j = 0, k = 0, l = 0, i = 0;
char *arry;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;
l = i + j;
arry = malloc((sizeof(char) * l) +1);
if (arry == NULL)
return (NULL);
j = 0;
while (k < i)
{
if (k <= i)
arry[i] = s1[k];
if (k >= i)
{
arry[i] = s2[j];
j++;
}
k++;
}
arry[k] = '\0';
return (arry);
}
