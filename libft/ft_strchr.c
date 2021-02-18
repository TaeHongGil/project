/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 14:40:37 by tgil              #+#    #+#             */
/*   Updated: 2020/10/10 15:03:20 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int chr)
{
	char	*temp;

	temp = (char *)str;
	while (*temp)
	{
		if (*temp == (char)chr)
		{
			return (temp);
		}
		temp++;
	}
	if (*temp == (char)chr)
		return (temp);
	return (NULL);
}
