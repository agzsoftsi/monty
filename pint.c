#include "monty.h"
/**
 * pint - pint function
 * @stack: head
 * @num_linea: num linea
 * Return: void function
 */
void pint(stack_t **stack, unsigned int num_linea)
{
	stack_t *ojo;

	ojo = *stack;
	if (ojo == NULL)
	{
		free(hola.linea);
		fclose(hola.fil);
		free_l(stack);
		dprintf(2, "L%u: can't pint, stack empty\n", num_linea);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", ojo->n);
}
