#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
