/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/01 19:24:17 by dreijans      #+#    #+#                 */
/*   Updated: 2023/03/07 21:28:34 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_duplicates(t_piece *start, t_piece *temp)
{
	if (temp->value == start->next->value)
	{
		printf("error duplicate found");
		exit(EXIT_FAILURE);
	}
}

void	sort_check(t_piece *list)
{
	
}

void	indexing(t_piece *list)
{
	t_piece	*temp;
	t_piece	*start;
	int		i;

	i = 0;
	temp = list;
	start = list;
	while (i < list_length(list))
	{
		start = list;
		while (start->next)
		{
			check_duplicates(start, temp);
			if (temp->value > start->next->value && start->next->index == -1)
				temp = start->next;
			else if (temp->index != -1)
				temp = start->next;
			start = start->next;
		}
		if (temp->index == -1)
			temp->index = i;
			temp = list;
		i++;
	}
}

void	print_list(t_piece *list)
{
	while (list)
	{
		printf("value[%d], index[%i]\n", list->value, list->index);
		list = list->next;
	}
}
