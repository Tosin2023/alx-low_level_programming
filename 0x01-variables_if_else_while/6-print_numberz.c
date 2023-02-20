#include <stdio.h>

/**
 * main - A program which prints number of base ten
 *
 * Return: always 0
 */
int main(void)
{
	int b = '0';

	while (b <= '9')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
