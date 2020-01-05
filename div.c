#include "monty.h"
/**
 * divi - divi
 * @stack: node head
 * @num_linea: number of the line
 * Return: nothing
 */
void divi(stack_t **stack, unsigned int num_linea)
{
	stack_t *ojo;
	stack_t *ojo2;
	int div = 0;

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
		div = ojo2->n / (*stack)->n;
		ojo = *stack;
		*stack = (*stack)->next;
		if (*stack)
			(*stack)->prev = NULL;
		free(ojo);
		(*stack)->n = div;
	}
	else
	{
		dprintf(2, "L%u: can't div, stack too short\n", num_linea);
		free(hola.linea);
		fclose(hola.fil);
		free_l(stack);
		exit(EXIT_FAILURE);
	}
}
