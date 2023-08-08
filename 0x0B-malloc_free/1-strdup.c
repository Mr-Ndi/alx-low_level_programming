# include <stdlib.h>
# include "main.h"

/**
 * _strdup -  a pointer to a newly allocated space in memory
 * @str: strings to be coppied
 *
 * Return: Null if str is Null
 * otherwise return a pointer
 */

char *_strdup(char *str)
{
int i = 1, a = 0;
char *q;

if (str == NULL)
return (NULL);

while (str[i])
{
i++;
}
q = malloc((sizeof(char) * i) + 1);
if (q == NULL)
return (NULL);
while (a < i)
{
q[a] = str[a];
a++;
}
return (q);
}
