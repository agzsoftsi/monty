#include "monty.h"
/**
 * mul - multiplies the top two elements of the stack
 * @h: head pointer
 * @line_number: line number in the file with Monty byte code
 * Return: none
 */
void _mul(stack_t **h, unsigned int line_number)
{
	stack_t *tmp;
	int result;

	if (_len_list(*h) < 2)
	{
		printf("L%d: can't mul, stack too short\n", line_number);
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
	result = (tmp->n * (*h)->n);
	_pop(h, line_number);
	tmp->n = result;
	globals.rval = 0;
}
