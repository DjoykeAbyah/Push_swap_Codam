/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/01 18:00:30 by dreijans      #+#    #+#                 */
/*   Updated: 2023/02/09 11:55:06 by dreijans      ########   odam.nl         */
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
	struct s_piece		*next;
	struct s_piece		*previous;
}							t_piece;

t_swap	*ft_add_content(int *stack_a, char *str_input);

#endif