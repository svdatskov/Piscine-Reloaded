# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdatskov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/22 19:45:12 by sdatskov          #+#    #+#              #
#    Updated: 2018/10/22 19:45:15 by sdatskov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./srcs/ft_putchar.c \
   ./srcs/ft_putstr.c \
   ./srcs/ft_strcmp.c \
   ./srcs/ft_strlen.c \
   ./srcs/ft_swap.c

SRCO = ft_putchar.o \
    ft_putstr.o \
    ft_strcmp.o \
    ft_strlen.o \
    ft_swap.o

IHEAD = ./includes/

all: $(NAME)

$(NAME):
	@gcc -Wall -Werror -Wextra -c $(SRC) -I $(IHEAD)
	@ar rc $(NAME) $(SRCO)

clean: 
	@/bin/rm -f $(SRCO)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
