# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/24 17:35:22 by macerver          #+#    #+#              #
#    Updated: 2025/11/28 12:48:17 by macerver         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a
CC := cc
CFLAGS := -Wall -Werror -Wextra -I
INCLUDE := ./libft/libft.h
SRC = ft_printf.c
OBJ = $(SRC:.c=.o)

AR := ar rcs
RM := rm -f

all: $(NAME)
$(NAME): $(OBJ)
	$(AR) $@ $^

%.o: %.c 
	$(CC) $(CFLAGS) $(INCLUDE) -c -o $@ $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re 