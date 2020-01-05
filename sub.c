#include "monty.h"
/**
 * sub - sub
 * @stack: node head
 * @num_linea: number of the line
 * Return: nothing
 */
void sub(stack_t **stack, unsigned int num_linea)
{
	stack_t *ojo;
	stack_t *ojo2;
	int resta = 0;

	if (*stack && (*stack)->next)
	{
		ojo2 = (*stack)->next;
		resta = ojo2->n - (*stack)->n;
		ojo = *stack;
		*stack = (*stack)->next;
		if (*stack)
			(*stack)->prev = NULL;
		free(ojo);
		(*stack)->n = resta;
	}
	else
	{
		dprintf(2, "L%u: can't sub, stack too short\n", num_linea);
		free(hola.linea);
		fclose(hola.fil);
		free_l(stack);
		exit(EXIT_FAILURE);
	}
}
