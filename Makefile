CC = cc
CFLAGS = -Wall -Werror -Wextra
SOURCE = push_swap.c utils.c ps_rotate.c ps_push.c ps_r_rotate.c ps_swap.c ps_sort_decide.c \
	ps_sort_small.c ps_sort_huge.c ps_check_input.c free_stuff.c ps_imput_init.c
OBJ = $(SOURCE:.c=.o)
NAME = push_swap
FTPRINTF	:= ./ft_printf/libftprintf.a
LIBFT		:= ./libft/libft.a

all: $(NAME)

$(NAME): $(OBJ) $(FTPRINTF) $(LIBFT)
	$(CC) $(SOURCE) $(CFLAGS) $(FTPRINTF) $(LIBFT) -o $(NAME)

$(FTPRINTF):
	(cd ./ft_printf/ && make && make clean)
$(LIBFT):
	(cd ./libft/ && make && make clean)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean
	$(MAKE) all

.PHONY: all clean fclean re
