#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * multiply - function to multiply two numbers
 * @num1: The first nmber
 * @num2: The second number
 * Return: the product of the two numbers passed
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}
/**
 * is_digit - the function to check foor integer inputs
 * @str: the input array
 * Return: 1 for integer , 0 for not integr
 */
int is_digit(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);

	}
	return (1);
}
/**
 * _atoi - function to convert str to int
 * @s: the input array
 * Return: outcome integer
 */
int _atoi(char *s)
{
	int sign = 1, i = 0;
	unsigned int rest = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && (s[i] != '\0'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		rest = (rest * 10) + (s[i] - '0');
		i++;
	}
	rest *= sign;
	return (rest);
}
/**
 * main - main entry of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 as succes
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	product = num1 * num2;

printf("%d\n", product);
return (0);
}
