#include <stdio.h>

/**
 * main - Prints numbers in hexadecimal
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar(number + '0');
	}

	for (number = 0; number < 6; number++)
	{
		putchar(number + 'a');
	}

	putchar('\n');

	return (0);
}
