#include <stdlib.h>
#include "dog.h"
/**
 * _string_length - the function to return string length
 * @s: the input string
 * Return: the length of thw string
 */
int _string_length(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
/**
 * string_copy - function to copy string
 * @dest: the destination of copued string
 * @src: the string to be copied
 * Return: copied string
 */
char *string_copy(char *dest, char *src)
{
	int a, length;

	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	for (a = 0; a < length; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
/**
 * new_dog - creating a new dog
 * @name: the anme of the new dog
 * @age: the age of the new dog
 * @owner: the owner of the new dog
 * Return: the new dog identities
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

len1 = _string_length(name);
len2 = _string_length(owner);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
	return (NULL);
dog->name = malloc(sizeof(char) * (len1 + 1));
if (dog->name == NULL)
{
	free(dog);
	return (NULL);
}
dog->owner = malloc(sizeof(char) * (len2 + 1));
if (dog->owner == NULL)
{
	free(dog);
	free(dog->name);
	return (NULL);
}
string_copy(dog->name, name);
string_copy(dog->owner, owner);
dog->age = age;

return (dog);
}
