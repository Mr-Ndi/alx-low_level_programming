#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - function to print opcodes of main
 * @main_ptr: pointer to the main function
 */
void print_opcodes(unsigned char *main_ptr) {
unsigned char *print_opcodes_ptr = (unsigned char *) &print_opcodes;

for (; print_opcodes_ptr < main_ptr; print_opcodes_ptr++) {
printf("%02x ", *print_opcodes_ptr);
}

printf("\n");
}

/**
 * main - main entrance
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0
 */
int main(int argc, char *argv[]) {
if (argc != 2) {
printf("Error\n");
return 1;
}

int num_bytes = atoi(argv[1]);

if (num_bytes < 0) {
printf("Error\n");
return 2;
}

unsigned char *main_ptr = (unsigned char *) &main;
print_opcodes(main_ptr);

return 0;
}
