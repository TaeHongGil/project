/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 21:42:04 by tgil              #+#    #+#             */
/*   Updated: 2020/10/06 22:14:17 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t size)
{
	unsigned char	*temp;
	size_t			i;

	temp = (unsigned char *)ptr;
	i = 0;
	while (i < size)
	{
		*temp = value;
		temp++;
		i++;
	}
	return (ptr);
}
