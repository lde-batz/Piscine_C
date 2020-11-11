SRCS = 	main.c \
		ft_tools.c \
		ft_tools2.c \
		colle_01.c \
		colle_02.c \
		colle_03.c \
		colle_04.c \
		colle_00.c \
		ft_results.c \
		ft_print_colle.c

OBJ = $(SRC:.c=.o)

RM = rm -f

NAME = colle-2

CC	= gcc -Wall -Wextra -Werror

all:	 $(NAME)

$(NAME): $(SR)
	  $(CC) -o $(NAME) $(SRCS) 

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all
