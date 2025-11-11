# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ltourbe <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/05 16:43:54 by ltourbe           #+#    #+#              #
#    Updated: 2025/11/11 17:42:59 by ltourbe          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= cc
CFLAGS		= -Wall -Wextra -Werror

SRCS		= ft_isascii.c \
		  ft_isdigit.c \
		  ft_isalnum.c \
		  ft_isalpha.c \
		  ft_isprint.c \
		  ft_strlen.c \
		  ft_strlcat.c \
		  ft_strlcpy.c \
		  ft_strncmp.c \
		  ft_atoi.c \
		  ft_bzero.c \
		  ft_memset.c \
		  ft_calloc.c \
		  ft_memchr.c \
		  ft_memcmp.c \
		  ft_memmove.c \
		  ft_memcpy.c \
		  ft_strdup.c \
		  ft_strrchr.c \
		  ft_tolower.c \
		  ft_toupper.c \
		  ft_strnstr.c \
		  ft_substr.c \
		  ft_strjoin.c \
		  ft_strtrim.c \
		  ft_split.c \
		  ft_itoa.c \
		  ft_strmapi.c \
		  ft_striteri.c \
		  ft_putchar_fd.c \
		  ft_putstr_fd.c \
		  ft_putendl_fd.c \
		  ft_putnbr_fd.c

OBJS		= $(patsubst %.c, %.o, $(SRCS))

NAME		= libft.a

all:		$(NAME)

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o:		%.c
	$(CC) $(CFLAGS) -c $^

clean:
	rm -f $(OBJS)

fclean:		clean
	rm -f $(NAME)

re:		fclean all

.PHONY:	clean fclean all
