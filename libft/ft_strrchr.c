/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 21:30:34 by tgil              #+#    #+#             */
/*   Updated: 2020/10/10 14:40:32 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	int		i;
	char	*temp;

	temp = (char *)str;
	i = ft_strlen((char *)str);
	while (i != -1)
	{
		if (str[i] == (char)chr)
		{
			temp += i;
			return (temp);
		}
		i--;
	}
	return (NULL);
}
