/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/07 20:42:13 by dreijans      #+#    #+#                 */
/*   Updated: 2023/03/07 20:45:57 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//push from top of a to top of b
void	pb(t_piece **top_a, t_piece **top_b)
{
	t_piece	*temp_a;
	t_piece	*temp_b;

	temp_a = *top_a;
	temp_b = *top_b;
	*top_a = (*top_a)->next;
	temp_a->next = temp_b;
	if (temp_b != NULL)
		(*top_b)->previous = temp_a;
	else
		temp_a->previous = NULL;
	*top_b = temp_a;
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

//line:25 first time it can be NULL so need this! second pb is different order
//line:26 NULL->prev is impossible
//line:29 top_b to new top temp_a