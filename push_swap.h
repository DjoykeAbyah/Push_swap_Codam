/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/01 18:00:30 by dreijans      #+#    #+#                 */
/*   Updated: 2023/02/10 21:08:35 by dreijans      ########   odam.nl         */
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
int			*array(t_piece *list);

#endif