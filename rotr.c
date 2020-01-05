#include "monty.h"
/**
 * rotr - rotr function
 * @stack: head
 * @num_linea: num linea
 * Return Nothing
 */

void rotr(stack_t **stack, unsigned int num_linea)
{
	stack_t *ojo2;

	if (*stack && (*stack)->next)
	{
		ojo2 = *stack;
		if (num_linea)
			while (ojo2->next)
			{
				ojo2 = ojo2->next;
			}
		ojo2->next = *stack;
		ojo2->prev->next = NULL;
		ojo2->prev = NULL;
		*stack = ojo2;
	}
}
