/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/06 20:31:03 by dreijans      #+#    #+#                 */
/*   Updated: 2023/03/06 18:45:01 by dreijans      ########   odam.nl         */
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
	// printf("list a before\n");
	// print_list(a);
	// printf("list b before\n");
	// print_list(b);
	//b->previous = NULL;
	// pb(&a, &b);
	// pb(&a, &b);
	// t_piece *test = b->next;
	// printf("test->prev->value[%d]\n", test->next->previous->value);
	// pb(&a, &b);
	// pb(&a, &b);
	// pa(&b, &a);
	// pa(&b, &a);
	// pa(&b, &a);
	// pa(&b, &a);
	// printf("list a between\n");
	// print_list(a);
	// printf("list b between\n");
	// print_list(b);
	// pa(&b, &a);
	// pa(&b, &a);
	// pa(&b, &a);
	// pa(&b, &a);
	// sa(&a);
	//pop(&a);
	// ra(&a);
	// rb(&b);
	// rr(&a, &b);
	// rra(&a);
	// rrb(&b);
	// rrr(&a, &b);
	// printf("list a after\n");
	// print_list(a);
	// printf("list b after\n");
	// print_list(b);
	return (0);
}

	// system("leaks a.out");
// & address of the specific data type