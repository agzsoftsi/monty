#include "monty.h"
/**
 * _div - divides the top two elements of the stack
 * @h: head pointer
 * @line_number: line number in the file with Monty byte code
 * Return: none
 */
void _div(stack_t **h, unsigned int line_number)
{
	stack_t *tmp;

	if (list_len(*h) < 2)
	{
		printf("L%d: can't div, stack too short\n", line_number);
		globals.retval = -1;
		return;
	}
	if ((*h)->n == 0)
	{
		printf("L%d: division by zero\n", line_number);
		globals.retval = -1;
		return;
	}
	tmp = (*h)->next;
	tmp->n /= (*h)->n;
	pop(h, line_number);
	globals.retval = 0;
}

