#include "monty.h"

/**
 * swap - swap function
 * @stack: head node
 * @num_linea: number of line
 * Return: Void function
 */
void swap(stack_t **stack, unsigned int num_linea)
{
	stack_t *ojo;

	if (*stack && (*stack)->next)
	{
		ojo = (*stack)->next;
		if (ojo == NULL)
		{
			exit(0);
		}
		(*stack)->next = ojo->next;
		(*stack)->prev = ojo;
		ojo->next = *stack;
		ojo->prev = NULL;
		*stack = ojo;
	}
	else
	{
		dprintf(2, "L%u: can't swap, stack too short\n", num_linea);
		free(hola.linea);
		fclose(hola.fil);
		free_l(stack);
		exit(EXIT_FAILURE);
	}
}
