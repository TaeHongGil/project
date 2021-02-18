/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iota.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 20:10:22 by tgil              #+#    #+#             */
/*   Updated: 2020/11/06 21:11:32 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long	itoa_pointer_count(unsigned long long n)
{
	long	count;

	if (n == 0)
		return (1);
	count = 0;
	if (n < 0)
		count++;
	while (n != 0)
	{
		n /= 16;
		count++;
	}
	return (count);
}

char	*itoa_pointer_set(char *result, unsigned long n, \
		long long count)
{
	char		*temp;
	long long	i;

	temp = result;
	*result++ = '0';
	*result++ = 'x';
	i = 1;
	while (--count)
		i *= 16;
	while (i != 0)
	{
		*result++ = "0123456789abcdef"[n / i];
		n -= (n / i) * i;
		i /= 16;
	}
	*result = '\0';
	return (temp);
}

char	*ft_pointer_itoa(unsigned long long n)
{
	char		*result;
	long long	count;

	count = itoa_pointer_count(n);
	if ((result = malloc(count * sizeof(char) + 3)) == NULL)
		return (NULL);
	return (itoa_pointer_set(result, n, count));
}
