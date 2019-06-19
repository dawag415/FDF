NAME = fdf

SRC = fdf_event.c  main.c fdf_parse.c fdf_init.c fdf_error.c fdf_event_1.c fdf_event_2.c

OBJ = $(SRC:.c=.o)

LIB = -L libft -lft -L sources/minilibx_macos -lmlx

CFLAGS += -Wall -Wextra -I libft -I sources/minilibx_macos

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\033[44;44;33mFdf Compilation processing ...\033[0m"
	@make -C libft
	@make -C sources/minilibx_macos
	@gcc $(CFLAGS) -o $(NAME) $(OBJ) $(LIB)  -framework OpenGL -framework AppKit
	@echo "\033[04;32mFdf Compilation completed !\033[0m"

$(OBJ):
	@gcc $(CFLAGS) -I includes -I libft/includes -c $*.c -o $@

clean:
	@make -C libft clean
	@echo "Cleaning .o processing ..."
	@rm -rf $(OBJ)
	@echo "Cleaning .o completed !"

fclean: clean
	@make -C libft fclean
	@echo "Fclean processing ..."
	@rm -f $(NAME)
	@echo "Fclean completed !"

re: fclean all

.PHONY: all clean fclean re
