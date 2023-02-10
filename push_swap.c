/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/01 19:24:17 by dreijans      #+#    #+#                 */
/*   Updated: 2023/02/10 21:02:27 by dreijans      ########   odam.nl         */
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
	new_node->next = NULL;
	new_node->previous = NULL;
	// keep doing this until next = null then previous is beginning?
	printf("newnode_value[%i]\n", new_node->value);
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
		i++;
		list = list->next;
	}
	return (array);
}

// t_piece	*ft_index_it(t_piece *a)
// {
// 	t_piece	*b;
// 	int		i;

// 	b = a->next;
// 	i = 0
// 	if (b != NULL)
// 	{
// 		if (a->value > b->value)
// 		{
			
// 		}
// 	}
// }

/* is number check?
empty string check?
- moet wel erin*/