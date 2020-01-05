#include "monty.h"


/**
 * tamanio - size
 * @linea: linea
 * Return: linea
 */
int tamanio(char *linea)
{
	unsigned int contador = 0;

	while (linea[contador])
	{
		contador++;
	}
	return (contador);
}
