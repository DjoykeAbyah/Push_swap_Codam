/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reverse_rotate.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/07 20:40:26 by dreijans      #+#    #+#                 */
/*   Updated: 2023/03/07 20:48:47 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_piece **a)
{
	t_piece	*temp;
	t_piece	*tail;

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
	t_piece	*temp;
	t_piece	*tail;

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
