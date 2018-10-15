NAME = wolf3d

CFLAGS = -Wall -Wextra -Werror

SRC = main.c \
	get_next_line.c \


OBJECTS = $(SRC:.c=.o)

LIB = ./libft/

all: $(LIB)libft.a $(NAME)

$(NAME):  $(OBJECTS)
	@gcc $(OBJECTS) $(LIB)libft.a -o $(NAME)
	@echo "\033[34mwolf3d ready!\033[0m"

%.o: %.c
	@gcc -c $< -o $@

$(LIB)libft.a:
	@make -C $(LIB)

clean:
	@make clean -C $(LIB)
	@rm -f $(OBJECTS)

fclean: clean
	@make fclean -C $(LIB)
	@rm -f $(NAME)

re: fclean all