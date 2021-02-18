/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 16:02:14 by tgil              #+#    #+#             */
/*   Updated: 2020/10/22 19:57:47 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *little, size_t size)
{
	size_t	i;
	size_t	l;
	size_t	b;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	l = ft_strlen((char *)little);
	b = ft_strlen((char *)big);
	if (b < size)
		size = b;
	while (i + l <= size)
	{
		if (ft_strncmp(big, little, l) == 0)
			return ((char *)big);
		i++;
		big++;
	}
	return (NULL);
}
