#include "monty.h"

/**
 * _mul - _mul function
 * @stack: heade
 * @num_linea: integer
 * Return: nothing
 */

void _mul(stack_t **stack, unsigned int num_linea)
{
	stack_t *ojo;
	stack_t *ojo2;
	int mul = 0;

	if (*stack && (*stack)->next)
	{
		ojo2 = (*stack)->next;
		mul = ojo2->n * (*stack)->n;
		ojo = *stack;
		*stack = (*stack)->next;
		if (*stack)
			(*stack)->prev = NULL;
		free(ojo);
		(*stack)->n = mul;
	}
	else
	{
		dprintf(2, "L%u: can't mul, stack too short\n", num_linea);
		free(hola.linea);
		fclose(hola.fil);
		free_l(stack);
		exit(EXIT_FAILURE);
	}
}
