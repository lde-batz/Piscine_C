# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lde-batz <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/17 12:47:25 by lde-batz          #+#    #+#              #
#    Updated: 2018/08/22 16:26:28 by lde-batz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a 

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all : $(NAME)

$(NAME) : 
	gcc -Wall -Werror -Wextra -c $(SRCS) -I ./includes
	ar rc libft.a *.o
	ranlib libft.a 

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all
