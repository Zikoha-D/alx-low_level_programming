#include <stdio.h>
#include <stdlib.h>

/**
 * main - nultiplies two numbers
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: product of number on success, otherwise 1
 */
int main(int argc, char  *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
