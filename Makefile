# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matmagal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/24 14:14:20 by matmagal          #+#    #+#              #
#    Updated: 2025/04/18 20:16:17 by matmagal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = 	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memchr.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memcmp.c \
		ft_memset.c \
		ft_strlen.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c

BONUS_SRC = 

OBJS = $(SRCS:.c=.o)
AR = ar rcs
RM = rm -f
BONUS_OBJ = $(BONUS_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

bonus: $(BONUS_OBJ) $(OBJS)
	$(AR) $(NAME) $(BONUS_OBJ) $(OBJS)

.PHONY: all clean fclean re
