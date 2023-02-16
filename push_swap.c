/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/01 19:24:17 by dreijans      #+#    #+#                 */
/*   Updated: 2023/02/16 16:49:07 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// char	*print_list(t_piece *list)
// {
// }

t_piece	*new_node(char *str_input)
{
	t_piece	*new_node;

	new_node = malloc(sizeof (t_piece));
	if (new_node == NULL)
		return (NULL);
		//man exit
		//atoi? maar what if alphabetic char first numcheck
	new_node->value = ft_atoi(str_input);
	new_node->index = -1;
	new_node->next = NULL;
	new_node->previous = NULL;
	return (new_node);
}

t_piece	*lstlast(t_piece *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

void	lstadd_back(t_piece **list, t_piece *new)
{
	t_piece	*back;

	if (*list)
	{
		back = lstlast(*list);
		back->next = new;
	}
	else
		*list = new;
}

int	list_length(t_piece *list)
{
	int	i;

	i = 0;
	while (list)
	{
		list = list->next;
		i++;
	}
	return (i);
}

void	indexing(t_piece *list)
{
	t_piece	*temp;
	t_piece	*start;
	int		i;
	int		lenght;

	i = 0;
	temp = list;
	start = list;
	lenght = list_length(list);
	while (i < lenght)
	{
		list = start;
		while (list)
		{
			if (temp->value > list->value && list->index == -1)
				temp = list;
			list = list->next;
		}
		temp->index = i;
		i++;
	}
	print_list(list);
}

void	print_list(t_piece *list)
{
	while (list)
	{
		printf("value[%d], index[%i]\n", list->value, list->index);
		list = list->next;
	}
}

/* is number check?
empty string check?
- moet wel erin*/