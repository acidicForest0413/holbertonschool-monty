#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct toy_stack_s
{
	int n;
	struct toy_stack_s *prev;
	struct toy_stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct global_variable - opcoode and its function
 * @file: the opcode
 * @push_arg: function to handle the opcode
 * @buffer: pointer to
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
void readFile(FILE *filename, stack_t **top_stack);
int _isnumber(char *str);
void get_opcode(char *opcode, stack_t **stack, unsigned int lineNb);
void free_memory(stack_t *head);

void _push(char *str, stack_t **head_stack, unsigned int line_number);
void _pall(stack_t **head_stack, unsigned int line_number);
void _pint(stack_t **head_stack, unsigned int line_number);
void _pop(stack_t **head_stack, unsigned int line_number);
void _swap(stack_t **stack, unsigned int line_number);
void _nop(stack_t **stack, unsigned int line_number);
void _add(stack_t **head_stack, unsigned int line_number);
#endif
