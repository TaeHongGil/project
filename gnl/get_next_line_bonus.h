/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 17:15:40 by tgil              #+#    #+#             */
/*   Updated: 2020/10/29 15:55:18 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# ifndef OPEN_MAX
#  define OPEN_MAX 32
# endif

int						get_next_line(int fd, char **line);

int						ft_strlen(char *s);

char					*ft_strdup(char *str);

char					*ft_strjoin(char *s1, char *s2);

unsigned int			ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int			ft_strlcat(char *dest, char *src, unsigned int size);

#endif
