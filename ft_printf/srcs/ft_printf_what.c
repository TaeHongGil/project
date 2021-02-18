/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_what.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 14:33:51 by tgil              #+#    #+#             */
/*   Updated: 2020/11/06 17:47:58 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_what(t_form *form, va_list *ap)
{
	if (form->format == 'c')
		ft_printf_char(form, ap);
	if (form->format == 's')
		ft_printf_str(form, ap);
	if (form->format == 'd' || form->format == 'i')
		ft_printf_int(form, ap);
	if (form->format == 'u')
		ft_printf_unsigned_int(form, ap);
	if (form->format == 'x' || form->format == 'X')
		ft_printf_hex(form, ap);
	if (form->format == 'p')
		ft_printf_pointer(form, ap);
	if (form->format == '%')
		ft_printf_per(form);
	return ;
}
