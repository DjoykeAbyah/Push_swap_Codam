/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/06 20:31:03 by dreijans      #+#    #+#                 */
/*   Updated: 2023/02/10 21:10:00 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int			i;
	char		**strings;
	t_piece		*new;
	t_piece		*list;

	i = 0;
	list = NULL;
	while (i < argc)
	{
		strings = ft_split(argv[i], ' ');
		i++;
	}
	i = 0;
	while (strings[i] != NULL)
	{	
		new = new_node(strings[i]);
		// & address of the specific data type
		lstadd_back(&list, new);
		i++;
	}
	array(list);
	return (0);
}
