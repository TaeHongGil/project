/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 22:06:09 by tgil              #+#    #+#             */
/*   Updated: 2020/10/22 14:29:49 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*result;
	size_t	i;

	if (!s)
		return (NULL);
	len = ft_strlen((char *)s);
	if (!(result = malloc(len * sizeof(char) + 1)))
		return (NULL);
	i = 0;
	while (s[i++])
		result[i - 1] = f(i - 1, s[i - 1]);
	result[i - 1] = '\0';
	return (result);
}
