/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admansar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:12:58 by admansar          #+#    #+#             */
/*   Updated: 2022/11/28 21:51:04 by admansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

int		ft_strlen(char *s);
char	*ft_strdup(char *s);
char	*ft_strchr(const char *s, int c);
char	*get_save(char *save);
char	*get_the_line(char *save);
char	*ft_strjoin(char *s1, char *s2);
char	*get_read(int fd, char *save);
char	*get_next_line(int fd);

#endif
