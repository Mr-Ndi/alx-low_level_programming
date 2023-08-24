#include "lists.h"
#include <stdio.h>
void printbeforemain(void) __attribute__((constructor));
/**
 * printbeforemain - function to print before main
 *
 * Return: nothing
 */
void printbeforemain(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
