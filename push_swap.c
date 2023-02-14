/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/01 19:24:17 by dreijans      #+#    #+#                 */
/*   Updated: 2023/02/14 21:15:15 by dreijans      ########   odam.nl         */
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

int	length(t_piece *list)
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

int	*array(t_piece *list)
{
	int	i;
	int	size;
	int	*array;

	i = 0;
	size = length(list);
	array = malloc(sizeof (int) * size);
	if (array == NULL)
		return (NULL);
	while (list)
	{
		array[i] = list->value;
		printf("array[%d]\n", array[i]);
		printf("index[%i]\n", list->index);
		i++;
		list = list->next;
	}
	return (array);
}

/* is number check?
empty string check?
- moet wel erin*/