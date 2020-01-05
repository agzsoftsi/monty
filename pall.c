#include "monty.h"

/**
 * pall - pall function
 * @stack: head
 * @num_linea: num linea
 * Return: void function
 */
void pall(stack_t **stack, unsigned int num_linea)
{
	stack_t *ojo;

	ojo = *stack;
	if (num_linea)
		while (ojo)
		{
			printf("%d\n", ojo->n);
			ojo = ojo->next;
		}
}
