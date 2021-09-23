#include "monty.h"

/**
 * push - a function that adds an element to the top of a stack
 * @stack: The stack to be edited
 * @element: The number to add to stack
 */
void push(stack_t **stack, unsigned int element)
{

}

/**
 * pall - a function that prints all elements in a stack
 *
 * @stack: The stack
 * @element: elements in the stack
 *
 */
void pall(stack_t **stack, unsigned int element)
{
	stack_t *check;
	check = *stack;

	if (element)
		while (check)
		{
			printf("%d\n", check->n);
			check = check->next;
		}
}
