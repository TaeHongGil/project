/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:54:46 by tgil              #+#    #+#             */
/*   Updated: 2020/11/06 17:29:03 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_char(t_form *form, va_list *ap)
{
	int		i;
	int		c;

	i = 0;
	c = va_arg(*ap, int);
	while (form->minus == 0 && ++i < form->width && ++form->size > -1)
		ft_putchar(' ');
	ft_putchar(c);
	form->size++;
	while (form->minus == 1 && ++i < form->width && ++form->size > -1)
		ft_putchar(' ');
	return ;
}
