/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/06 20:31:03 by dreijans      #+#    #+#                 */
/*   Updated: 2023/03/07 21:08:14 by dreijans      ########   odam.nl         */
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
		strings = ft_split(argv[1], ' ');
		while (strings[i] != NULL)
		{	
			new = new_node(strings[i]);
			lstadd_back(&a, new);
			i++;
		}
		indexing(a);
	}
	if (argc > 2)
	{
		while (argv[i + 1] != NULL)
		{	
			new = new_node(argv[i + 1]);
			lstadd_back(&a, new);
			i++;
		}
		indexing(a);
	}
	print_list(a);
	print_list(b);
	return (0);
}

/* TO DO */
/*
1. check if list is already sorted
2. check line:38 what is passed multiple strings?
3. do i need to free split in split?
4. check if errors are handled comform subject
5. & address of the specific data type
6. use own printf 
7. is it a number check?
8. max int min int check
9. empty string check?
10. main needs to be norm proof, 
make content of the if statements into a function
*/

// t_piece *test = b->next;
// printf("test->prev->value[%d]\n", test->next->previous->value);
// system("leaks a.out");

	// printf("list a before\n");
	// print_list(a);
	// printf("list b before\n");
	// print_list(b);
	// pb(&a, &b);
	// pb(&a, &b);
	// pa(&b, &a);
	// pa(&b, &a);
	// printf("list a between\n");
	// print_list(a);
	// printf("list b between\n");
	// print_list(b);
	// sa(&a);
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