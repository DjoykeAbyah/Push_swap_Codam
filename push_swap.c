/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/01 19:24:17 by dreijans      #+#    #+#                 */
/*   Updated: 2023/02/07 16:22:11 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_add_content(int argc, char **argv)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		printf("argv[%d]: %s\n", i, argv[i]);
		i++;
	}
	return (0);
}
