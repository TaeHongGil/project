/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 22:18:36 by tgil              #+#    #+#             */
/*   Updated: 2020/10/06 22:19:08 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int count;

	count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return (count);
}