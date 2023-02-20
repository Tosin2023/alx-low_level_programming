#include <stdio.h>

/**
 * main - A program that excluded two Alphabet in lowercase
 *
 * Return: always 0
 */
int main(void)
{
	char lc = 'a';

	while (lc <= 'z')
	{
		if (lc != 'q' && lc != 'e')
		{
			putchar(lc);
		}

		lc++;
	}
	putchar('\n');
	return (0);
}

