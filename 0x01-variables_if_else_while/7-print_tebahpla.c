#include <stdio.h>

/**
 * main - A program that will prin in reverse order
 *
 * Return: always 0
 */

int main(void)
{
	char r = 'z';

	while (r >= 'a')
	{
		putchar(r);
		r--;
	}
	putchar('\n');
	return (0);
}
