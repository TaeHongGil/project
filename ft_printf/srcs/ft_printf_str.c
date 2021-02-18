/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:54:46 by tgil              #+#    #+#             */
/*   Updated: 2020/11/06 18:53:59 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_str(t_form *form, va_list *ap)
{
	char	*temp;
	int		len;
	int		i;
	char	*str;

	str = va_arg(*ap, char*);
	if ((!(str) || str == 0))
		temp = ft_strdup("(null)");
	else
		temp = ft_strdup(str);
	len = ft_strlen(temp);
	if (form->prec < 0)
		form->prec = len;
	if (form->dot == 1 && form->prec < len)
	{
		temp[form->prec] = 0;
		len = ft_strlen(temp);
	}
	print_space_str(form, len, 0);
	i = 0;
	while (temp[i] && form->size++ > -1)
		ft_putchar(temp[i++]);
	print_space_str(form, len, 1);
	free(temp);
	return ;
}

void	ft_printf_per(t_form *form)
{
	aster_check(form);
	print_space_str(form, 1, 0);
	form->size++;
	ft_putchar('%');
	print_space_str(form, 1, 1);
	return ;
}

void	ft_printf_pointer(t_form *form, va_list *ap)
{
	char				*temp;
	int					len;
	int					i;
	unsigned long long	num;

	num = va_arg(*ap, unsigned long long);
	if ((!(num) || num == 0))
	{
		if (form->dot == 1 && form->prec == 0)
			temp = ft_strdup("0x");
		else
			temp = ft_strdup("0x0");
	}
	else
		temp = ft_pointer_itoa(num);
	len = ft_strlen(temp);
	print_space_str(form, len, 0);
	i = 0;
	while (temp[i] && form->size++ > -1)
		ft_putchar(temp[i++]);
	print_space_str(form, len, 1);
	free(temp);
	return ;
}
