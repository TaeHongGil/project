/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:24:58 by tgil              #+#    #+#             */
/*   Updated: 2020/11/06 18:03:01 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	set_form3(char *temp, t_form *form, int *i)
{
	while (temp[*i] == '-' || temp[*i] == '0')
	{
		if (temp[*i] == '-' && ++*i)
			form->minus = 1;
		if (temp[*i] == '0' && ++*i)
			form->zero = 1;
	}
}

int		set_form2(char *temp, t_form *form, int i, va_list *ap)
{
	int		j;
	char	w[20];
	int		arg;

	set_form3(temp, form, &i);
	if (temp[i] == '*' && ++i)
	{
		arg = va_arg(*ap, int);
		if (arg < 0 && (arg *= -1) && (form->minus = 1))
			form->zero = 0;
		form->width = arg;
	}
	else
	{
		j = 0;
		while (ft_isdigit(temp[i]))
			w[j++] = temp[i++];
		w[j] = '\0';
		form->width = ft_atoi(w);
	}
	return (i);
}

int		set_form(const char *str, t_form *form, va_list *ap)
{
	char	*temp;
	int		i;
	int		j;
	char	w[20];

	temp = set_str_form(str);
	form->format = (char)temp[ft_strlen(temp) - 1];
	i = set_form2(temp, form, 1, ap);
	if (temp[i] == '.' && ++i)
		form->dot = 1;
	if (temp[i] == '*' && ++i)
	{
		form->aster = 1;
		form->prec = va_arg(*ap, int);
	}
	else
	{
		j = 0;
		while (ft_isdigit(temp[i]))
			w[j++] = temp[i++];
		w[j] = '\0';
		form->prec = ft_atoi(w);
	}
	free(temp);
	return (ft_strlen(temp));
}

int		ft_printf(const char *str, ...)
{
	va_list ap;
	int		i;
	t_form	form;

	va_start(ap, str);
	i = -1;
	form.size = 0;
	while (str[++i])
	{
		if (str[i] == '%')
		{
			form = form_init(form);
			i += set_form(str + i, &form, &ap) - 1;
			ft_printf_what(&form, &ap);
		}
		else
		{
			form.size++;
			ft_putchar(str[i]);
		}
	}
	va_end(ap);
	return (form.size);
}
