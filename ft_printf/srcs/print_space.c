/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_space.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:48:09 by tgil              #+#    #+#             */
/*   Updated: 2020/11/06 17:39:43 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_space_str(t_form *form, int len, int location)
{
	if (location == 0)
	{
		while (form->minus == 0 && form->zero == 0 && \
				len++ < form->width && form->size++ > -1)
			ft_putchar(' ');
		while (form->minus == 0 && form->zero == 1 && \
				len++ < form->width && form->size++ > -1)
			ft_putchar('0');
	}
	if (location == 1)
		while (form->minus == 1 && len++ < form->width && form->size++ > -1)
			ft_putchar(' ');
}

void	print_space_int(t_form *form, int len, int location)
{
	if (location == 0)
	{
		while (form->minus == 0 && form->zero == 0 && \
				len++ < form->width && form->size++ > -1)
			ft_putchar(' ');
		while (form->minus == 0 && form->zero == 1 && \
				form->width > form->prec && form->dot == 1 &&\
				len++ < form->width && form->size++ > -1)
			ft_putchar(' ');
	}
	if (location == 1)
		while (form->minus == 1 && len++ < form->width && form->size++ > -1)
			ft_putchar(' ');
}
