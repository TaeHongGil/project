/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgil <kf08@naver.com>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:23:35 by tgil              #+#    #+#             */
/*   Updated: 2020/11/06 18:04:10 by tgil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct	s_form
{
	int		zero;
	int		minus;
	int		dot;
	int		prec;
	int		width;
	int		aster;
	int		size;
	char	format;
}				t_form;

int				ft_printf(const char *str, ...);

void			ft_putchar(char c);

t_form			form_init(t_form form);

int				ft_strlen(char *str);

char			*ft_strdup(char *src);

char			*ft_strjoin(char const *s1, char const *s2);

char			*ft_substr(char const *s, unsigned int start, size_t len);

size_t			ft_strlcpy(char *dest, char *src, size_t size);

int				ft_isdigit(int c);

int				ft_atoi(char *str);

char			*ft_itoa(int num);

char			*ft_hex_itoa(unsigned int num, t_form form);

char			*ft_unsigned_itoa(unsigned int num);

char			*ft_pointer_itoa(unsigned long long a);

char			*set_str_form(const char *str);

void			ft_printf_what(t_form *form, va_list *ap);

void			ft_printf_char(t_form *form, va_list *ap);

void			ft_printf_per(t_form *form);

void			ft_printf_str(t_form *form, va_list *ap);

void			ft_printf_pointer(t_form *form, va_list *ap);

void			ft_printf_int(t_form *form, va_list *ap);

void			ft_printf_unsigned_int(t_form *form, va_list *ap);

void			ft_printf_hex(t_form *form, va_list *ap);

void			print_space_str(t_form *form, int len, int location);

void			print_space_int(t_form *form, int len, int location);

void			print_zero_int(t_form *form, int len);

void			unsigned_int(char *temp, t_form *form, int len);

void			sign_int(char *temp, t_form *form, int len);

void			aster_check(t_form *form);

#endif
