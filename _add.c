#include "monty.h"
/**
 * _add - add two elements of top of the stack
 * @h: head pointer
 * @line_number: line number in the file with Monty byte code
 * Return: none
 */
void _add(stack_t **h, unsigned int line_number)
{
	stack_t *tmp;
	int sum;

	if (_len_list(*h) < 2)
	{
		printf("L%u: can't add, stack too short\n", line_number);
		globals.rval = -1;
		return;
	}
	tmp = (*h)->next;
	sum = (*h)->n + tmp->n;
	tmp->n = sum;
	_pop(h, line_number);
	globals.rval = 0;
}
