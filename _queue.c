#include "monty.h"
/**
 * queue - sets the format of the data to a queue (FIFO)
 * @head: pointer to linked list
 * @line_number: number of lines in file
 */
void queue(__attribute__((unused)) stack_t **head,
		__attribute__((unused)) unsigned int line_number)
{
	if (globals.mode == 1)
		return;
	globals.mode = 1;
}
