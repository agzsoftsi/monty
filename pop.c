#include "monty.h"

/**
 * pop - delete first noce
 * @stack: head of the linked list
 * @num_linea: number of the line
 * Return: Nothing
 */
void pop(stack_t **stack, unsigned int num_linea)
{
	stack_t *ojo;

	ojo = *stack;
	if (ojo == NULL)
	{
		dprintf(2, "L%d: can't pop an empty stack\n", num_linea);
		free(hola.linea);
		fclose(hola.fil);
		free_l(stack);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->next)
	{
		*stack = ojo->next;
		(*stack)->prev = NULL;
		free(ojo);
	}
	else
		free_l(stack);
}
