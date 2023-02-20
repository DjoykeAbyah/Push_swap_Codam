/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/09 11:35:31 by dreijans      #+#    #+#                 */
/*   Updated: 2023/02/09 16:19:59 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

ssize_t	ft_find_newline(char *str)
{
	int			i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_read_line(int fd, char *string, char *read_string)
{
	int		byte_read;
	char	*free_string;

	while (ft_find_newline(read_string) == -1)
	{
		byte_read = read (fd, read_string, BUFFER_SIZE);
		read_string[byte_read] = '\0';
		if (byte_read == 0)
			return (string);
		if (byte_read == -1)
		{
			read_string[0] = '\0';
			free (string);
			return (0);
		}
		free_string = string;
		string = ft_copy_join(string, read_string);
		free (free_string);
		if (string == NULL)
			return (NULL);
	}
	return (string);
}

char	*ft_save(char *str)
{
	char	*new_str;
	int		len;

	len = ft_find_newline(str);
	if (len == -1)
		return (str);
	new_str = ft_substr(str, 0, len + 1);
	free (str);
	return (new_str);
}

char	*get_next_line(int fd)
{
	static char		read_string[BUFFER_SIZE + 1];
	char			*string;
	int				i;

	string = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	string = ft_copy_join(string, read_string);
	if (string == NULL)
		return (NULL);
	string = ft_read_line(fd, string, read_string);
	if (string == NULL)
		return (NULL);
	string = ft_save(string);
	if (string == NULL)
		return (NULL);
	i = ft_find_newline(read_string);
	ft_strlcpy(read_string, &read_string[i + 1], ft_strlen(&read_string[i]));
	if (read_string[0] == '\0' && string[0] == '\0')
	{
		free (string);
		return (NULL);
	}
	return (string);
}
