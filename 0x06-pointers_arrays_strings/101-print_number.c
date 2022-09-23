#include "main.h"

/**
 * print_number - function to print int using _putchar
 * @num: int to print
 */
void print_number(int num)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
