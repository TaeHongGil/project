/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iota.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 20:10:22 by tgil              #+#    #+#             */
/*   Updated: 2020/11/06 14:30:53 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		itoa_u_count(unsigned int n)
{
	int count;

	if (n == 0)
		return (1);
	count = 0;
	if (n < 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*itoa_u_set(char *result, unsigned int n, int count)
{
	char	*temp;
	int		i;

	temp = result;
	if (n < 0)
	{
		*result++ = '-';
		count--;
		n *= -1;
	}
	i = 1;
	while (--count)
		i *= 10;
	while (i != 0)
	{
		*result++ = n / i + '0';
		n -= (n / i) * i;
		i /= 10;
	}
	*result = '\0';
	return (temp);
}

char	*ft_unsigned_itoa(unsigned int n)
{
	char	*result;
	int		count;

	count = itoa_u_count(n);
	if ((result = malloc(count * sizeof(char) + 1)) == NULL)
		return (NULL);
	return (itoa_u_set(result, n, count));
}
