#include "monty.h"
#include "monty.h"


/**
 * pstr - pstri function
 * @stack: head
 * @num_linea: num linea
 * Return Nothing
 */
void pstr(stack_t **stack, unsigned int num_linea)
{
	stack_t *ojo;

	ojo = *stack;
	if (num_linea)
		while (ojo && ojo->n != 0 && ojo->n > 0 && ojo->n < 128)
		{
			printf("%c", ojo->n);
			ojo = ojo->next;
		}
	printf("\n");
}
