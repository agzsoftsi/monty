#include "monty.h"
/**
 * add - adds the top two elements of the stack
 * @h: head pointer
 * @line_number: line number in the file with Monty byte code
 * Return: none
 */
void add(stack_t **h, unsigned int line_number)
{
	stack_t *tmp;
	int sum;

	if (list_len(*h) < 2)
	{
		printf("L%u: can't add, stack too short\n", line_number);
		globals.retval = -1;
		return;
	}
	tmp = (*h)->next;
	sum = (*h)->n + tmp->n;
	tmp->n = sum;
	pop(h, line_number);
	globals.retval = 0;
}