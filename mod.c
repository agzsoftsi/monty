#include "monty.h"
/**
 * _mod - _mod function
 * @stack: heade
 * @num_linea: integer
 * Return: nothing
 */

void _mod(stack_t **stack, unsigned int num_linea)
{
	stack_t *ojo;
	stack_t *ojo2;
	int mul = 0;

	if (*stack && (*stack)->next)
	{
		if ((*stack)->n == 0)
		{
			dprintf(2, "L%u: division by zero\n", num_linea);
			free(hola.linea);
			fclose(hola.fil);
			free_l(stack);
			exit(EXIT_FAILURE);
		}
		ojo2 = (*stack)->next;
		mul = ojo2->n % (*stack)->n;
		ojo = *stack;
		*stack = (*stack)->next;
		if (*stack)
			(*stack)->prev = NULL;
		free(ojo);
		(*stack)->n = mul;
	}
	else
	{
		dprintf(2, "L%d: can't mod, stack too short\n", num_linea);
		free(hola.linea);
		fclose(hola.fil);
		free_l(stack);
		exit(EXIT_FAILURE);
	}
}
