#include "monty.h"

/**
 * verif - verif
 * @numero: number
 * Return: always 0
 */
int verif(char *numero)
{
	int ojo = 0;

	if (!numero)
		return (1);

	if (numero[ojo] == 45)
		ojo++;
	while (numero[ojo])
	{
		if (numero[ojo] < 48 || numero[ojo] > 57)
			return (-1);
		ojo++;
	}
	return (0);
}
