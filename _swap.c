#include "monty.h"
/**
 * swap - swaps the top two elements of the stack
 * @h: head pointer
 * @line_number: line number in the file with Monty byte code
 * Return: none
 */
void swap(stack_t **h, unsigned int line_number)
{
	stack_t *tmp;

	if (list_len(*h) < 2)
	{
		printf("L%u: can't swap, stack too short\n", line_number);
		globals.retval = -1;
		return;
	}

	tmp = *h;
	*h = tmp->next;
	tmp->next = (*h)->next;
	(*h)->next = tmp;
	tmp->prev = *h;
	(*h)->prev = NULL;
	if (tmp->next)
		(tmp->next)->prev = tmp;
	globals.retval = 0;
}

