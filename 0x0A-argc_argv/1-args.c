#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments ppassed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */
int main(argc, char *argv[] _attribute_((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
