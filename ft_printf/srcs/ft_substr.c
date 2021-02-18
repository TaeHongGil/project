/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 20:46:23 by tgil              #+#    #+#             */
/*   Updated: 2020/11/02 17:30:47 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;

	if (!s)
		return (NULL);
	if (ft_strlen((char *)s) < (int)start)
		return (ft_strdup(""));
	while (start--)
		s++;
	if (!(result = malloc(len * sizeof(char) + 1)))
		return (NULL);
	ft_strlcpy(result, (char *)s, len + 1);
	return (result);
}
