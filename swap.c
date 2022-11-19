#include "monty.h"

/**
* _swap -  swaps the top two elements of the stack.
* @stack: pointer to head de stack
* @line_number:number of line option code
*/
void _swap(stack_t **stack, unsigned int line_number)
{
stack_t *tmp;
stack_t *cursor;
cursor = *stack;
if (!*stack || !(*stack)->next)
{
fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
else
{
tmp = cursor->next;
cursor->next = tmp->next;
tmp->next = *stack;
cursor->prev = tmp;
tmp->prev = NULL;
*stack = tmp;
}
}
