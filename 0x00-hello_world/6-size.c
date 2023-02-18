#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 on success
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)", sizeof(char));
	printf("size of int: %ld byte(s)", sizeof(int));
	printf("size of a long int: %ld byte(s)", sizeof(long int));
	printf("size of a long long int: %ld byte(s)", sizeof(long long int));
	printf("Size of a float: %ld byte(s)", sizeof(float));
	return (0);
}
