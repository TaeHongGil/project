/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:54:46 by tgil              #+#    #+#             */
/*   Updated: 2020/11/06 18:13:12 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_hex(t_form *form, va_list *ap)
{
	char	*temp;
	int		len;
	int		num;

	num = va_arg(*ap, unsigned int);
	temp = ft_hex_itoa(num, *form);
	aster_check(form);
	len = ft_strlen(temp);
	if (form->dot == 1 && form->prec == 0 && num == 0)
	{
		*temp = 0;
		form->width++;
	}
	unsigned_int(temp, form, len);
	free(temp);
	return ;
}
