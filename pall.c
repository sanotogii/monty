#include "monty.h"

void _pall(stack_t **top)
{
	stack_t *temp;

	*temp = **top;

	while (temp != NULL)
	{
		fprintf(stdout, "%d\n", temp->n);
		temp = temp->next;
	}
}

