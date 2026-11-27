#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints a list of strings
 * @separator: string to separate the strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator != NULL)
			printf("%s", separator);

		str = va_arg(args, char *);
		printf("%s", str != NULL ? str : "(nil)");
	}

	va_end(args);
	printf("\n");
}
