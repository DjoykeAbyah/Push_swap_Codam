/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/01 19:24:17 by dreijans      #+#    #+#                 */
/*   Updated: 2023/02/09 11:52:36 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// char	*print_list(t_piece *list)
// {
// }

void	ft_lstadd_back(t_piece **lst, t_piece *new)
{
	t_piece	*back;

	if (*lst)
	{
		back = ft_lstlast(*lst);
		back->next = new;
	}
	else
	{
		*lst = new;
	}
}

t_piece	*ft_add_content(int *value, char *str_input)
{
	t_piece	*new_node;

	new_node = malloc(sizeof (t_piece));
	if (new_node == NULL)
		return (NULL);
		//man exit
	new_node->value = ft_atoi(str_input);
	new_node->next = NULL;
	new_node->previous = NULL;
	// keep doing this until next = null then previous is beginning
	return (new_node);
}

/* is number check?
empty string check?
- moet wel erin*/