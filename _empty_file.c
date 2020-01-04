#include "monty.h"
/**
 * _empty_file - verify if line of file needs to be tokenized
 * @str: pointer to string
 * Return: 1 is tokenize, 0 if not tokenize
 */
int _empty_file(char *str)
{
	int con;

	con = 0;
	while (str[con] != '\n' && str[con] != '\0')
	{
		if (str[con] != ' ' && str[con] != '#')
			return (0);
		con++;
	}
	return (1);
}
