/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 17:35:16 by tgil              #+#    #+#             */
/*   Updated: 2020/10/29 14:31:40 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		check_n(char *temp)
{
	int	i;

	i = 0;
	while (temp[i])
	{
		if (temp[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

int		set_line(int fd, char **line, char **l, int len)
{
	char *temp;

	if (len >= 0)
	{
		l[fd][len] = '\0';
		*line = ft_strdup(l[fd]);
		temp = ft_strdup(l[fd] + len + 1);
		free(l[fd]);
		l[fd] = ft_strdup(temp);
		free(temp);
		return (1);
	}
	*line = ft_strdup(l[fd]);
	free(l[fd]);
	l[fd] = NULL;
	return (0);
}

int		get_next_line(int fd, char **line)
{
	static char		*l[OPEN_MAX];
	char			buffer[BUFFER_SIZE + 1];
	int				i;
	int				len;
	char			*temp;

	if (fd < 0 || !line || BUFFER_SIZE < 1)
		return (-1);
	len = -1;
	if (!l[fd])
		l[fd] = ft_strdup("");
	while ((len = check_n(l[fd])) < 0 && \
			(i = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[i] = '\0';
		temp = ft_strjoin(l[fd], buffer);
		free(l[fd]);
		l[fd] = ft_strdup(temp);
		free(temp);
	}
	if (i < 0)
		return (-1);
	return (set_line(fd, line, l, len));
}
