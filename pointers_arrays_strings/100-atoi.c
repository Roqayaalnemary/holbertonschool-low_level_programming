#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int digit;
	int limit;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign = -sign;
		i++;
	}
	if (s[i] == '\0')
		return (0);
	limit = (sign == -1) ? INT_MIN : -INT_MAX;
	while (s[i] >= '0' && s[i] <= '9')
	{
		digit = s[i] - '0';
		if (result < limit / 10)
			return (sign == -1 ? INT_MIN : INT_MAX);
		result *= 10;
		if (result < limit + digit)
			return (sign == -1 ? INT_MIN : INT_MAX);
		result -= digit;
		i++;
	}
	return (sign == -1 ? result : -result);
}
