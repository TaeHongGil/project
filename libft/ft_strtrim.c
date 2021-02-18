/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 20:59:23 by tgil              #+#    #+#             */
/*   Updated: 2020/10/18 21:34:23 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		len_end(char const *s1, char const *set)
{
	int	len_set;
	int	len;
	int	i;

	len_set = ft_strlen((char *)set);
	len = ft_strlen((char *)s1) - 1;
	while (1)
	{
		i = 0;
		while (i++ < len_set)
			if (set[i - 1] == s1[len])
				break ;
		if (i - 1 == len_set)
			break ;
		len--;
	}
	len++;
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		i;
	int		len_set;
	int		end;

	if (!s1)
		return (NULL);
	len_set = ft_strlen((char *)set);
	while (*s1)
	{
		i = 0;
		while (i++ < len_set)
			if (set[i - 1] == *s1)
				break ;
		if (i - 1 == len_set)
			break ;
		s1++;
	}
	if (*s1 == '\0')
		return (ft_strdup(""));
	end = len_end(s1, set);
	if (!(result = malloc(end * sizeof(char) + 1)))
		return (NULL);
	ft_strlcpy(result, (char *)s1, end + 1);
	return (result);
}
