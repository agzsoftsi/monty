#include "monty.h"
/**
 * _verify_int - checks if string contains all digits
 * @str: pointer to string
 * Return: 1 if it is, 0 if not
 */

int _verify_int(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] == '-')
		{
			i++;
			continue;
		}
		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
			continue;
		}
		else
			return (0);
		i++;
	}
	return (1);
}
