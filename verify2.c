#include "monty.h"
/**
 * ver2 - ver2 function
 * @stack: heade
 * @contador: integer
 * Return: nothing
 */
void ver2(stack_t **stack, unsigned int contador)
{
	if (verif(hola.token) == 0)
		hola.numero = atoi(hola.token);
	else
	{
		dprintf(2, "L%u: usage: push integer\n", contador);
		free_l(stack);
		free(hola.linea);
		fclose(hola.fil);
		exit(EXIT_FAILURE);
	}
}
