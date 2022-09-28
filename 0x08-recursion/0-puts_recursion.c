#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a line
 * @s: string to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\n')
	{
		_putchar('\n');
	}
	else
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
}
