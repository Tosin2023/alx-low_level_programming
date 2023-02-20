#include <stdio.h>

/**
 * main - A program to print a single digit
 *
 * Return: always 0
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar (' ');
		}
			++n;
	}

	putchar('\n');
	return (0);
}
