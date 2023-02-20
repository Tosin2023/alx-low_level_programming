#include <stdio.h>

/**
 * main - Program that will print base sixteen in lowercase
 *
 * Return: always 0
 */

int main(void)
{
	char n = '0';
	char a = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
