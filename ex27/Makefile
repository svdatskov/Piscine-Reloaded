# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdatskov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/24 15:24:07 by sdatskov          #+#    #+#              #
#    Updated: 2018/10/24 15:25:34 by sdatskov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_display_file.c

SRCO = ft_display_file.o

all: $(NAME)

$(NAME):
	@gcc -Wall -Werror -Wextra -c $(SRC)
	@gcc -o $(NAME) $(SRCO)

clean: 
	@/bin/rm -f $(SRCO)

fclean: clean
	@/bin/rm -f $(NAME)
