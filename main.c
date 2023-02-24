/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/06 20:31:03 by dreijans      #+#    #+#                 */
/*   Updated: 2023/02/24 19:08:31 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int			i;
	char		**strings;
	t_piece		*new;
	t_piece		*a;
	t_piece		*b;

	i = 0;
	strings = NULL;
	a = NULL;
	b = NULL;
	if (argc == 2)
	{
		strings = ft_split(argv[1], ' '); //free split
		while (strings[i] != NULL)
		{	
			new = new_node(strings[i]);
			lstadd_back(&a, new);
			//adding index value without altering sequence + check duplicates
			i++;
		}
		indexing(a);
	}
	if (argc > 2)
	{
		//what if passed multiple strings??
		//is lijst al sorted? kijken van klein naar groot.
		while (argv[i + 1] != NULL)
		{	
			new = new_node(argv[i + 1]);
			lstadd_back(&a, new);
			//adding index value without altering sequence + check duplicates
			i++;
		}
		indexing(a);
	}
	//sa(&a);
	print_list(a);
	return (0);
}

// & address of the specific data type
// system("leaks a.out");