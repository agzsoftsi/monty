#include "monty.h"
/**
 * add - add function
 * @stack: head
 * @num_linea: number of line
 * Return: void function
 */
void add(stack_t **stack, unsigned int num_linea)
{
	stack_t *ojo;
	stack_t *ojo2;
	int suma = 0;

	if (*stack && (*stack)->next)
	{
		ojo2 = (*stack)->next;
		suma = (*stack)->n + ojo2->n;
		ojo = *stack;
		*stack = (*stack)->next;
		if (*stack)
			(*stack)->prev = NULL;
		free(ojo);
		(*stack)->n = suma;
	}
	else
	{
		dprintf(2, "L%d: can't add, stack too short\n", num_linea);
		free(hola.linea);
		fclose(hola.fil);
		free_l(stack);
		exit(EXIT_FAILURE);
	}
}
