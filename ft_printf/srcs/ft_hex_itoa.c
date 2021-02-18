/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iota.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 20:10:22 by tgil              #+#    #+#             */
/*   Updated: 2020/11/06 17:47:48 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		itoa_hex_count(unsigned int n)
{
	int count;

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

char	*itoa_hex_set(char *result, unsigned int n, int count, t_form form)
{
	char	*temp;
	int		i;

	temp = result;
	i = 1;
	while (--count)
		i *= 16;
	while (i != 0)
	{
		if (form.format == 'X')
			*result++ = "0123456789ABCDEF"[n / i];
		if (form.format == 'x')
			*result++ = "0123456789abcdef"[n / i];
		n -= (n / i) * i;
		i /= 16;
	}
	*result = '\0';
	return (temp);
}

char	*ft_hex_itoa(unsigned int n, t_form form)
{
	char	*result;
	int		count;

	if (form.format == 'x' && n == 4294967295)
		return (ft_strdup("ffffffff"));
	if (form.format == 'X' && n == 4294967295)
		return (ft_strdup("FFFFFFFF"));
	count = itoa_hex_count(n);
	if ((result = malloc(count * sizeof(char) + 1)) == NULL)
		return (NULL);
	return (itoa_hex_set(result, n, count, form));
}
