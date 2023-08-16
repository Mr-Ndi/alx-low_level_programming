#include <stdio.h>
#include <stdlib.h>
/**
 *print_opcodes - function to print ouw opcodes of main
 * Return: nothing
 */
void print_opcodes(void)
{
int i;

char *main_ptr = (char *) &print_opcodes;

for (i = 0; i < sizeof(print_opcodes); i++)
{
printf("%02x", main_ptr[i] & 0xff);

}
printf("\n");
}
/**
 * main - main entrance
 * @argc: number of arguments
 * @argv: arrys of argments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
return (1);
}
int num_bytes = atoi(argv[1]);

if (num_bytes < 0)
{
printf("Error\n");
return (2);
}
print_opcodes();
return (0);
}
