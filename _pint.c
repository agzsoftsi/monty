#include "monty.h"
/**
 * pint - prints all the values of a list
 * @h: head pointer
 * @line_number: line number in the file with Monty byte code
 * Return: none
 */
void pint(stack_t **h, unsigned int line_number)
{
	if (h == NULL || *h == NULL)
	{
		printf("L%d: can't pint, stack empty\n", line_number);
		globals.retval = -1;
		return;
	}
	else
		printf("%d\n", (*h)->n);
	globals.retval = 0;
}