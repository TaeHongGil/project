/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_zero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 18:01:24 by tgil              #+#    #+#             */
/*   Updated: 2020/11/05 20:31:08 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_zero_int(t_form *form, int len)
{
	while (form->zero == 1 && ++len < form->width && \
			form->dot == 0 && ++form->size > -1)
		ft_putchar('0');
	while (form->zero == 1 && form->dot == 1 && \
			len++ - 1 < form->prec && form->size++ > -1)
		ft_putchar('0');
}

void	aster_check(t_form *form)
{
	if (form->aster == 1 && form->prec < 0 && form->zero == 1)
		form->dot = 0;
	if (form->zero == 1 && form->minus == 1)
		form->zero = 0;
}
