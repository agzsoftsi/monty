#include "monty.h"

/**
 * _len_list - count number of elements in a list
 * @h: head pointer
 * Return: number of elements
 */
size_t _len_list(stack_t *h)
{
	stack_t *temp;
	size_t count = 0;

	temp = h;
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
