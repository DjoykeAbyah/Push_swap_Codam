/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/01 18:00:30 by dreijans      #+#    #+#                 */
/*   Updated: 2023/03/03 19:35:22 by djoyke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./Libft/libft.h"
# include <stdlib.h>
# include <stdio.h>

typedef struct s_piece
{
	int					value;
	int					index;
	struct s_piece		*next;
	struct s_piece		*previous;
}							t_piece;

t_piece		*new_node(char *str_input);
void		lstadd_back(t_piece **list, t_piece *new);
int			list_length(t_piece *list);
void		indexing(t_piece *list);
void		print_list(t_piece *list);
t_piece		*lstlast(t_piece *lst);
void		lstadd_front(t_piece **lst, t_piece *new);

void		sa(t_piece **a);
void		sb(t_piece **b);
void		ss(t_piece **a, t_piece **b);
void		pb(t_piece **top_s, t_piece **top_d);
void		pa(t_piece **top_s, t_piece **top_d);
void		pop(t_piece **p);
void		ra(t_piece **a);
void		rb(t_piece **b);
void		rr(t_piece **a, t_piece **b);
void		rra(t_piece **a);
void		rrb(t_piece **b);
//void		rrr(t_piece *a, t_piece *b);

#endif