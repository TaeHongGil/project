/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 16:46:05 by tgil              #+#    #+#             */
/*   Updated: 2020/10/18 21:12:59 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	int		i;
	char	*s;
	char	*d;

	if (!dest && !src)
		return (dest);
	d = (char *)dest;
	s = (char *)src;
	if (dest <= src)
	{
		i = 0;
		while (i++ < (int)size)
			d[i - 1] = s[i - 1];
	}
	else
	{
		i = (int)size - 1;
		while (i-- >= 0)
			d[i + 1] = s[i + 1];
	}
	return (dest);
}
