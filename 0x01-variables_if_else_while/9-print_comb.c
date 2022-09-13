#include <stdio.h>

/**
 *main - prints the numbers from 00 to 99
 *Return: Always 0
 */
int main(void)
{
int i;

for (i = 48; i < 58; i++)
{
putchar(i);
if (i != 57)
{	
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
