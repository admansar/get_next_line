/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admansar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:57:18 by admansar          #+#    #+#             */
/*   Updated: 2022/11/28 19:11:29 by admansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_save(char *save)
{
	char	*s;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (save[i] != '\n' && save[i])
		i++;
	if (save[i] == '\n')
		i++;
		s = malloc(sizeof(char) * ft_strlen(save) - i + 1);
	while (save[i])
	{
		s[j++] = save[i++];
	}
	s[j] = '\0';
	return (s);
}

char	*get_line(char *save)
{
	int		i;
	char	*s;

	i = 0;
	if (!save)
		return (NULL);
	while (save[i] != '\n' && save[i])
		i++;
	if (save[i] == '\n')
		i++;
	s = malloc(sizeof(char) * i + 1);
	i = 0;
	while (save[i] != '\n' && save[i])
	{
		s[i] = save[i];
		i++;
	}
	if (save[i] == '\n')
	{
		s[i] = save[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

char	*get_read(int fd, char *save)
{
	int		c;
	int		looper;
	char	*ptr;

	c = 1;
	looper = 1;
	ptr = malloc(sizeof(char) * BUFFER_SIZE + 1);
	while (c > 0 && looper == 1)
	{
		c = read(fd, ptr, BUFFER_SIZE);
		ptr[c] = '\0';
		save = ft_strjoin(save, ptr);
		if (ft_strchr(save, '\n'))
			looper = 0;
	}
	return (save);
}

char	*get_next_line(int fd)
{
	static char	*save;
	char		*line;

	save = get_read(fd, save);
	if (!save)
		return (NULL);
	line = get_line(save);
	save = get_save(save);
	return (line);
}
