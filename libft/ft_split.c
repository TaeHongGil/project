/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <tgil@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 14:37:47 by tgil              #+#    #+#             */
/*   Updated: 2020/10/22 20:06:52 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		str_count(char const *s, char c)
{
	int count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s != c && *s)
				s++;
		}
		else
			s++;
	}
	return (count);
}

int		char_count(char const *s, char c)
{
	int count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			while (*s != c && *s)
			{
				count++;
				s++;
			}
			break ;
		}
		else
			s++;
	}
	return (count);
}

char	**str_free(char **result)
{
	while (*result)
	{
		free(*result);
		result++;
	}
	free(result);
	return (NULL);
}

char	**str_str(char **result, char const *s, char c, int count)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	while (i++ < count)
	{
		len = char_count(s, c);
		if (!(result[i - 1] = (char *)malloc(len * sizeof(char) + 1)))
			return (str_free(result));
		j = 0;
		while (*s == c && *s)
			s++;
		while (j++ < len)
			result[i - 1][j - 1] = *s++;
		result[i - 1][j - 1] = '\0';
		while (*s == c && *s)
			s++;
	}
	result[i - 1] = 0;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		count;

	if (!s)
		return (NULL);
	count = str_count(s, c);
	if (!(result = (char **)malloc((count + 1) * sizeof(char *))))
		return (NULL);
	if (!(result = str_str(result, s, c, count)))
		return (NULL);
	return (result);
}
