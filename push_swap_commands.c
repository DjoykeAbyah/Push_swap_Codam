/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap_commands.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/24 17:17:10 by dreijans      #+#    #+#                 */
/*   Updated: 2023/03/06 18:44:05 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_piece **a)
{
	t_piece	*one;
	t_piece	*two;
	t_piece	*three;

	if (*a == NULL)
		exit(EXIT_FAILURE);
	one = *a;
	two = (*a)->next;
	three = (*a)->next->next;
	one->next = three;
	one->previous = two;
	two->next = one;
	two->previous = NULL;
	three->previous = one;
	*a = two;
	printf("sa\n");
}

void	sb(t_piece **b)
{
	t_piece	*one;
	t_piece	*two;
	t_piece	*three;

	if (*b == NULL)
		exit(EXIT_FAILURE);
	one = *b;
	two = (*b)->next;
	three = (*b)->next->next;
	one->next = three;
	one->previous = two;
	two->next = one;
	two->previous = NULL;
	three->previous = one;
	*b = two;
	printf("sb\n");
}

void	ss(t_piece **a, t_piece **b)
{
	sa(a);
	sb(b);
	printf("ss\n");
}

//push from top of a to top of b
void	pb(t_piece **top_a, t_piece **top_b)
{
	t_piece	*temp_a;
	t_piece	*temp_b;

	temp_a = *top_a;
	temp_b = *top_b;
	*top_a = (*top_a)->next;
	temp_a->next = temp_b;
	//first time it can be NULL so need this! second pb is different order
	if (temp_b != NULL)
		(*top_b)->previous = temp_a;
	else
		temp_a->previous = NULL; //want NULL->prev kanniet!
	*top_b = temp_a;//don't forget top_b to new top!(tempa)
	printf("pb\n");
}

//push from top of b to top of a
void	pa(t_piece **top_b, t_piece **top_a)
{
	t_piece	*temp_b;
	t_piece	*temp_a;

	temp_b = *top_b;
	temp_a = *top_a;
	*top_b = (*top_b)->next;
	temp_b->next = temp_a;
	if (temp_a != NULL)
		(*top_a)->previous = temp_b;
	else
		temp_b->previous = NULL;
	*top_a = temp_b;
	printf("pa\n");
}

void	pop(t_piece **p)
{
	t_piece	*temp;

	temp = *p;
	*p = (*p)->next;
	free(temp);
}

void	ra(t_piece **a)
{
	t_piece	*temp;

	if (*a == NULL)
		exit(EXIT_FAILURE);
	temp = *a;
	lstadd_back(a, temp);
	*a = (*a)->next;
	temp->next = NULL;
	printf("ra\n");
}

void	rb(t_piece **b)
{
	t_piece	*temp;

	if (*b == NULL)
		exit(EXIT_FAILURE);
	temp = *b;
	lstadd_back(b, temp);
	*b = (*b)->next;
	temp->next = NULL;
	printf("rb\n");
}

void	rr(t_piece **a, t_piece **b)
{
	ra(a);
	rb(b);
	printf("rr\n");
}

void	rra(t_piece **a)
{
	t_piece *temp;
	t_piece *tail;

	if (*a == NULL)
		exit(EXIT_FAILURE);
	tail = lstlast(*a);
	temp = tail->previous;
	lstadd_front(a, tail);
	tail->previous = NULL;
	temp->next = NULL;
	printf("rra\n");
}

void	rrb(t_piece **b)
{
	t_piece *temp;
	t_piece *tail;

	if (*b == NULL)
		exit(EXIT_FAILURE);
	tail = lstlast(*b);
	temp = tail->previous;
	lstadd_front(b, tail);
	tail->previous = NULL;
	temp->next = NULL;
	printf("rrb\n");
}

void	rrr(t_piece **a, t_piece **b)
{
	rra(a);
	rrb(b);
	printf("rrr\n");
}
