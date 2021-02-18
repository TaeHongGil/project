/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 15:44:14 by tgil              #+#    #+#             */
/*   Updated: 2020/11/05 19:22:31 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_form	form_init(t_form form)
{
	form.zero = 0;
	form.minus = 0;
	form.dot = 0;
	form.prec = 0;
	form.width = 0;
	form.format = 0;
	form.aster = 0;
	return (form);
}
