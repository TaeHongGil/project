/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 19:10:53 by tgil              #+#    #+#             */
/*   Updated: 2020/11/02 19:14:45 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_atoi(char *str)
{
	long check;
	long num;

	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	check = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			check = -1;
		str++;
	}
	num = 0;
	while (*str >= 48 && *str <= 57)
	{
		num = (num * 10) + (*str++ - 48);
		if (num > 2147483647 && check == 1)
			return (-1);
		if (num > 2147483648 && check == -1)
			return (0);
	}
	return (num * check);
}
