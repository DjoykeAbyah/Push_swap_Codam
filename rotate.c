/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/07 20:39:00 by dreijans      #+#    #+#                 */
/*   Updated: 2023/03/07 20:41:19 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
