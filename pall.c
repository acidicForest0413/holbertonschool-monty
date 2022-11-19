#include "monty.h"
/**
 * _pall - Function to display the status of stack
 * @head_stack: pointer to node
 * @line_number:number of line option code
 * Return: index nombre node
 */
void _pall(stack_t **head_stack, unsigned int line_number)
{
	int index = 0;
	stack_t *cursor;

	cursor = *head_stack;

	UNUSED(line_number);
	while (cursor)
	{
		if (cursor != NULL)
		printf("%d\n", cursor->n);
		index++;
		cursor = cursor->next;
	}
}
