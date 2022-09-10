#include <stdlib.h>

/**
 *main - prints all the numbers of base 16 in lowercase,
 *followed by a new line
 *Return: Always 0
 */
int main(void)
{
	int i;
	char j;

	for (i = 48; i < 58; i++)
	{
		purchar(i);
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
