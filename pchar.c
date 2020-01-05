#include "monty.h"
/**
 * pchar - pchar function
 * @stack: heade
 * @num_linea: integer
 * Return: nothing
 */

void pchar(stack_t **stack, unsigned int num_linea)
{
	stack_t *ojo;

	ojo = *stack;
	if (ojo == NULL)
	{
		free(hola.linea);
		fclose(hola.fil);
		free_l(stack);
		dprintf(2, "L%u: can't pchar, stack empty\n", num_linea);
		exit(EXIT_FAILURE);
	}
	if (ojo->n >= 128 || ojo->n < 0)
	{
		free(hola.linea);
		fclose(hola.fil);
		free_l(stack);
		dprintf(2, "L%d: can't pchar, value out of range\n", num_linea);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", ojo->n);
}
