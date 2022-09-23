#include "main.h"

/**
 * print_buffer: print the content of size bytes of the buffer pointed by b
 * The output should be 10 bytes line
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i;

	for (i = 0; i <= (size - 1) / 10 && size; i++)
	{
		printf("%08x: ", i * 10);
		if(i < size / 10)
		{
			print_line(b, 9, i);
		}
		else
		{
			print_line(b, size % 10 - 1, i);
		}
		putcharr('\n');
	}
	if (size == 0)
	{
		putchar('\n');
	}
}
