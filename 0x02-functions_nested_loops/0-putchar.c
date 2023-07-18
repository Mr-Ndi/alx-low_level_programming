#include <stdio.h>
/**
 * main - Entre point.
 * Description:displaying putchar.
 * Return: always 0 indicating successful execution.
 */
int _putchar(char c);
int main(void)
{
char p[] = "_putchar";
int i;

for (i = 0; i < (int)sizeof(p) - 1; i++)
{
_putchar (p[i]);
}
_putchar ('\n');
return (0);
}
