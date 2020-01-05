#include "monty.h"
/**
 * rotl - rotl function
 * @stack: head
 * @num_linea: num linea
 * Return Nothing
 */

void rotl(stack_t **stack, unsigned int num_linea)
{
	stack_t *ojo, *ojo2;

	if (*stack && (*stack)->next)
	{
		ojo = *stack;
		ojo2 = ojo;
		*stack = ojo->next;
		(*stack)->prev = NULL;
		if (num_linea)
			while (ojo2->next)
			{
				ojo2 = ojo2->next;
			}
		ojo2->next = ojo;
		ojo->prev = ojo2;
		ojo->next = NULL;
	}
}
