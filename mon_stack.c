#include "monty.h"

/**
 * free_stack - frees a doubly linked list
 * @head: head of the stack
 */

void free_stack(stack_t *head)
{
	stack_t *lux;

	lux = head;
	while (head)
	{
		lux = head->next;
		free(head);
		head = lux;
	}
}
