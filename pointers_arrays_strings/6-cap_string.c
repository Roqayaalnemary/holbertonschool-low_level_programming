#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to modify
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;
	int new_word = 1;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && new_word)
		{
			str[i] = str[i] - ('a' - 'A');
		}

		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		    str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		    str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		    str[i] == '}')
		{
			new_word = 1;
		}
		else
		{
			new_word = 0;
		}

		i++;
	}

	return (str);
}
