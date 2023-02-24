/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap_commands.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/24 17:17:10 by dreijans      #+#    #+#                 */
/*   Updated: 2023/02/24 19:36:02 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_piece **a)
{
	t_piece	*one;
	t_piece	*two;
	t_piece	*three;

	one = *a;
	two = (*a)->next;
	three = (*a)->next->next;

	one->next = three;
	one->previous = two;
	two->next = one;
	two->previous = NULL;
	three->previous = one;

	*a = two;
}

void	sb(t_piece **b)
{
	t_piece	*one;
	t_piece	*two;
	t_piece	*three;

	one = *b;
	two = (*b)->next;
	three = (*b)->next->next;

	one->next = three;
	one->previous = two;
	two->next = one;
	two->previous = NULL;
	three->previous = one;

	*b = two;
}

void	ss(t_piece **a, t_piece **b)
{
	sa(&a);
	sb(&b);
}

void	ra(t_piece **a)
{
	
	int = listlenght
	listlast = *a //first element
	while lenght != 0;
	{
		
	}
	
}