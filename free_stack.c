#include "monty.h"
/**
 * free_l - free
 * @stack: node head
 * Return: nothing
 */
void free_l(stack_t **stack)
{
	stack_t *cleaner = *stack;

	while (*stack)
	{
		cleaner = cleaner->next;
		free(*stack);
		*stack = cleaner;
	}
}
