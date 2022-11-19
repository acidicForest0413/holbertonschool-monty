#include "monty.h"

/**
 * _pint - prints the value at the top of the stack
 * @head_stack: pointer to node
 * @line_number:number of line option code
 */
void _pint(stack_t **head_stack, unsigned int line_number)
{
	stack_t *cursor;

	cursor = *head_stack;
	(void) line_number;

	if (head_stack == NULL || *head_stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		printf("%d\n", cursor->n);
	}
}
