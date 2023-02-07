/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/01 18:00:30 by dreijans      #+#    #+#                 */
/*   Updated: 2023/02/07 17:53:10 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./Libft/libft.h"
# include <stdlib.h>
# include <stdio.h>

typedef struct t_list
{
	void				*content;
	struct t_list		*next;
}							t_swap;

void	*ft_add_content(int argc, char **argv);

#endif