# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgil <kf08@naver.com>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/19 14:25:50 by tgil              #+#    #+#              #
#    Updated: 2020/11/06 16:29:34 by tgil             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= srcs/ft_printf.c \
			  srcs/ft_strdup.c \
			  srcs/ft_strjoin.c \
			  srcs/ft_strlen.c \
			  srcs/form_init.c \
			  srcs/ft_putchar.c \
			  srcs/ft_substr.c \
			  srcs/ft_strlcpy.c \
			  srcs/ft_isdigit.c \
			  srcs/ft_atoi.c \
			  srcs/set_str_form.c \
			  srcs/ft_printf_what.c\
			  srcs/ft_printf_char.c\
			  srcs/print_space.c\
			  srcs/ft_printf_str.c\
			  srcs/ft_printf_int.c\
			  srcs/print_zero.c \
			  srcs/ft_itoa.c \
			  srcs/ft_unsigned_itoa.c\
			  srcs/ft_hex_itoa.c\
			  srcs/ft_pointer_itoa.c\
			  srcs/ft_printf_hex.c\

OBJS		= $(SRCS:.c=.o)

INCLUDES	= -I./includes

CFLAGS		= -Wall -Wextra -Werror

NAME		= libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

.c.o:
	gcc $(CFLAGS) -c $< -o $@ $(INCLUDES)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	rm -f a.out

re: fclean all
