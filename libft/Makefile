# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgil <kf08@naver.com>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/19 14:25:50 by tgil              #+#    #+#              #
#    Updated: 2020/10/22 20:30:17 by tgil             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES	= ./ft_memset.c \
		  ./ft_bzero.c \
		  ./ft_strrchr.c \
		  ./ft_strlen.c \
		  ./ft_strlcpy.c \
		  ./ft_strlcat.c \
		  ./ft_atoi.c \
		  ./ft_calloc.c \
		  ./ft_isalnum.c \
		  ./ft_isalpha.c \
		  ./ft_isdigit.c \
		  ./ft_isprint.c \
		  ./ft_isascii.c \
		  ./ft_strchr.c \
		  ./ft_memchr.c \
		  ./ft_memcpy.c \
		  ./ft_memccpy.c \
		  ./ft_memcmp.c \
		  ./ft_memmove.c \
		  ./ft_strdup.c \
		  ./ft_strncmp.c \
		  ./ft_strnstr.c \
		  ./ft_tolower.c \
		  ./ft_toupper.c \
		  ./ft_itoa.c \
		  ./ft_split.c \
		  ./ft_substr.c \
		  ./ft_strtrim.c \
		  ./ft_strmapi.c \
		  ./ft_strjoin.c \
		  ./ft_putchar_fd.c \
		  ./ft_putstr_fd.c \
		  ./ft_putnbr_fd.c \
		  ./ft_putendl_fd.c
		  
FILES_B = ./ft_lstnew.c \
		  ./ft_lstsize.c \
		  ./ft_lstadd_front.c \
		  ./ft_lstlast.c \
		  ./ft_lstadd_back.c \
		  ./ft_lstdelone.c \
		  ./ft_lstclear.c \
		  ./ft_lstiter.c \
		  ./ft_lstmap.c


OBJS	= $(FILES:.c=.o)

OBJS_B	= $(FILES_B:.c=.o)

CFLAGS	= -Wall -Wextra -Werror
NAME	= libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

.c.o:
	gcc $(CFLAGS) -c $< -o $@ -Ilibth.h

bonus: $(OBJS) $(OBJS_B)
	ar rcs $(NAME) $(OBJS) $(OBJS_B)

clean:
	rm -f $(OBJS)
	rm -f $(OBJS_B)

fclean: clean   
	rm -f $(NAME)

re: fclean all
