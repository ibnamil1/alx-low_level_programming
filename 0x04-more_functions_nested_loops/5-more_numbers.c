#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 */
void more_numbers(void)
{
	int i = 0, a, b;

	while (i < 10)
	{
		a = 0;

		while (a < 15)
		{
			b = a;

			if (a > 9)
			{
				b = a / 10;

			}
			_putchar('0' + b);
			if (a > 9)
			{
				_putchar('0' + a % 10);
			}
			a++;
		}
		_putchar('\n');
	}
}

