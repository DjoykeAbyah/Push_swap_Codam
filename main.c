/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/06 20:31:03 by dreijans      #+#    #+#                 */
/*   Updated: 2023/02/06 21:50:05 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		printf("Argument %d: [%s]\n", i, argv[i]);
		i++;
	}
	return (0);
}

// #include <unistd.h>

// int	main(int argc, char **argv)
// {
// 	int	i;

// 	i = 1;
// 	if (argc > i)
// 	{
// 		while (argv[0][i] != '\0')
// 		{
// 			write (1, &argv[0][i], 1);
// 			i++;
// 		}
// 		write(1, "\n", 1);
// 		return (0);
// 	}
// }
