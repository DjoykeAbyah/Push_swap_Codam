/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/01 19:24:17 by dreijans      #+#    #+#                 */
/*   Updated: 2023/02/27 17:13:09 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_piece	*new_node(char *str_input)
{
	t_piece	*new_node;

	new_node = malloc(sizeof (t_piece));
	if (new_node == NULL)
		exit(EXIT_FAILURE);
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
		new->previous = back;
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
		start = list;
		while (start->next)
		{
			if (temp->value == start->next->value)
			{
				printf("error duplicate found");//nog comform subject
				exit(EXIT_FAILURE);
			}
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

/* is number check?
empty string check?
- moet wel erin*/