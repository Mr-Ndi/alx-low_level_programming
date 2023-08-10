# include "main.h"
# include <stdlib.h>
# include <stdio.h>

/**
 * string_nconcat -  a function that concatenates two strings
 * @s1:string 1
 * @s2:string 2
 * @n:number of characters from the second string
 *
 * Return:Null if it was passed empty string otherwise
 * cocnatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2, i;
char *str;

if (s1 == NULL)
len1 = 0;
if (s2 == NULL)
len2 = 0;

len1 = 0;
len2 = 0;
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;

if (n >= len2)
n = len2;

str = malloc(len1 + n + 1);
for (i = 0; i < len1; i++)
str[i] = s1[i];

for (i = 0; i < n; i++)
str[len1 + i] = s2[i];

str[len1 + n] = '\0';
return (str);
}
