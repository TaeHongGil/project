/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:54:46 by tgil              #+#    #+#             */
/*   Updated: 2020/11/06 18:27:07 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_int(t_form *form, va_list *ap)
{
	char	*temp;
	int		len;
	int		num;

	num = va_arg(*ap, int);
	temp = ft_itoa(num);
	aster_check(form);
	len = ft_strlen(temp);
	if (form->dot == 1 && form->prec == 0 && num == 0)
	{
		*temp = 0;
		form->width++;
	}
	if (num >= 0)
		unsigned_int(temp, form, len);
	else
		sign_int(temp, form, len);
	free(temp);
	return ;
}

void	ft_printf_unsigned_int(t_form *form, va_list *ap)
{
	char	*temp;
	int		len;
	int		num;

	num = va_arg(*ap, unsigned int);
	temp = ft_unsigned_itoa(num);
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

void	unsigned_int(char *temp, t_form *form, int len)
{
	int	prec;

	prec = 0;
	if (len < form->prec)
	{
		form->zero = 1;
		prec = form->prec - len;
	}
	print_space_int(form, len + prec, 0);
	if (form->dot == 0 && form->minus == 0)
		print_zero_int(form, --len);
	else
		print_zero_int(form, len);
	while (*temp)
	{
		form->size++;
		ft_putchar(*temp++);
	}
	print_space_int(form, len + prec, 1);
	return ;
}

void	sign_int(char *temp, t_form *form, int len)
{
	int	prec;

	len--;
	prec = 0;
	if (len < form->prec)
	{
		form->zero = 1;
		prec = form->prec - len;
	}
	print_space_int(form, len + prec + 1, 0);
	ft_putchar(*temp++);
	form->size++;
	print_zero_int(form, len);
	while (*temp)
	{
		form->size++;
		ft_putchar(*temp++);
	}
	print_space_int(form, len + prec + 1, 1);
	return ;
}
