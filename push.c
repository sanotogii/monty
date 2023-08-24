#include "monty.h"


void _push(stack_t **top, char *arg)
{
	stack_t *new;
	int num;

	if (arg == NULL)
	{
		fprintf(stderr, "L<line_number>: usage: push integer\n");
		exit(EXIT_FAILURE);
	}
	num = atoi(arg);
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{	
		fprintf(stderr, "Error: malloc\n");
		exit(EXIT_FAILURE);
	}
	new->n = num;
	(new)->next = *top;
	*top = new;
}
