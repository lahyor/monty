#include "monty.h"

/**
 * m_sub - subtract 2 elements of the stack
 * @head: pointer to pointer to first node
 * @count: line counter
 * Return: none
 */

void m_sub(stack_t **head, unsigned int count)
{
	stack_t *twp;
	int sub, no;

	twp = *head;
	for (no = 0; twp != NULL; no++)
		twp = twp->next;
	if (no < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	twp = *head;
	sub = twp->next->n - twp->n;
	twp->next->n = sub;
	*head = twp->next;
	free(twp);
}
