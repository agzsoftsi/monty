#include "monty.h"

/**
 * push - push function
 * @stack: head
 * @num_linea: number of line
 * Return: Always 0 (Success)
 */
void push(stack_t **stack, unsigned int num_linea)
{
	stack_t *ojo;

	ver2(stack, num_linea);
	if (hola.token)
	{
		ojo = malloc(sizeof(stack_t));
		if (ojo == NULL)
		{
			fputs("Error: malloc failed\n", stderr);
			exit(EXIT_FAILURE);
		}
		ojo->n = hola.numero, ojo->next = NULL;
		ojo->prev = NULL;
		if (*stack)
		{
			if (hola.flag == 1)
			{
				ojo->next = *stack;
				(*stack)->prev = ojo;
				*stack = ojo;
			}
			else
			{
				while ((*stack)->next)
					*stack = (*stack)->next;
				(*stack)->next = ojo, ojo->prev = *stack;
				while ((*stack)->prev)
					*stack = (*stack)->prev;
			}
		}
		else
			*stack = ojo;
	}
	else
	{
		free(hola.linea), fclose(hola.fil);
		dprintf(2, "L%u: usage: push integer\n", num_linea);
		free_l(stack);
		exit(EXIT_FAILURE);
	}
}
