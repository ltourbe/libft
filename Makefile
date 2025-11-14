# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ltourbe <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/05 16:43:54 by ltourbe           #+#    #+#              #
#    Updated: 2025/11/14 17:31:16 by ltourbe          ###   ########.fr        #
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
		  ft_strchr.c \
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

BONUS_SRCS	= ft_lstnew.c \
		  ft_lstadd_front.c \
		  ft_lstsize.c \
		  ft_lstlast.c \
		  ft_lstadd_back.c \
		  ft_lstdelone.c \
		  ft_lstclear.c \
		  ft_lstiter.c

BONUS_OBJS 	= $(patsubst %.c, %.o, $(BONUS_SRCS))

bonus:	$(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o:		%.c
	$(CC) $(CFLAGS) -c $^

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean:		clean
	rm -f $(NAME)

re:		fclean all

.PHONY:	clean fclean all
