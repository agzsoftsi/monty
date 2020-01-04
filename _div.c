#include "monty.h"

void _div(stack_t **h, unsigned int line_number)
{
	stack_t *tmp;

	if (_len_list(*h) < 2)
	{
		printf("L%d: can't div, stack too short\n", line_number);
		globals.rval = -1;
		return;
	}
	if ((*h)->n == 0)
	{
		printf("L%d: division by zero\n", line_number);
		globals.rval = -1;
		return;
	}
	tmp = (*h)->next;
	tmp->n /= (*h)->n;
	_pop(h, line_number);
	globals.rval = 0;
}
