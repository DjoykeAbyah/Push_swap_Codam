/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   make_list.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/07 20:49:49 by dreijans      #+#    #+#                 */
/*   Updated: 2023/03/07 20:51:23 by dreijans      ########   odam.nl         */
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

void	lstadd_front(t_piece **lst, t_piece *new)
{
	new->next = *lst;
	*lst = new;
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
