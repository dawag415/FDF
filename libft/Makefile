# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iwagner <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/23 20:33:23 by iwagner           #+#    #+#              #
#    Updated: 2017/09/23 20:40:31 by iwagner          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = 	ft_abso.c			\
		ft_atoi.c 			\
		ft_alloc_str.c		\
		ft_bzero.c 			\
		ft_count_words.c	\
		ft_isalnum.c 		\
		ft_isalpha.c  		\
		ft_isascii.c 		\
		ft_isdigit.c 		\
		ft_islower.c		\
		ft_isprint.c 		\
		ft_isupper.c		\
		ft_itoa.c 			\
		ft_itoa_base.c 		\
		ft_lstadd.c 		\
		ft_lstdel.c 		\
		ft_lstdelone.c 		\
		ft_lstiter.c 		\
		ft_lstmap.c 		\
		ft_lstnew.c 		\
		ft_memalloc.c 		\
		ft_memccpy.c 		\
		ft_memchr.c 		\
		ft_memcmp.c 		\
		ft_memcpy.c 		\
		ft_memdel.c 		\
		ft_memmove.c 		\
		ft_memset.c 		\
		ft_putchar.c 		\
		ft_putchar_fd.c 	\
		ft_putendl.c 		\
		ft_putendl_fd.c 	\
		ft_putnbr.c 		\
		ft_putnbr_fd.c 		\
		ft_putstr.c 		\
		ft_putstr_fd.c 		\
		ft_strcat.c 		\
		ft_strchr.c 		\
		ft_strclr.c 		\
		ft_strcmp.c 		\
		ft_strcpy.c 		\
		ft_strdel.c 		\
		ft_strdup.c 		\
		ft_strequ.c 		\
		ft_striter.c 		\
		ft_striteri.c 		\
		ft_strjoin.c 		\
		ft_strlen.c 		\
		ft_strmap.c 		\
		ft_strmapi.c 		\
		ft_strncat.c 		\
		ft_strncmp.c 		\
		ft_strncpy.c 		\
		ft_strnequ.c 		\
		ft_strnew.c 		\
		ft_strnstr.c 		\
		ft_strrchr.c 		\
		ft_strsplit.c 		\
		ft_strstr.c 		\
		ft_strsub.c 		\
		ft_strtrim.c 		\
		ft_tolower.c 		\
		ft_toupper.c 		\
		ft_strlcat.c 		\
		mlx_image.c			\
		mlx_struct_init.c	\
		mlx_struct_init2.c	\

FLAGS += -Wall -Wextra

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\033[44;04;33mLibft Compilation processing ...\033[0m"
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "\033[04;32mLibft Compilation completed !\033[0m"

$(OBJ):
	@gcc $(CFLAGS) -I libft.h -I ../sources/minilibx_macos -I mlx_cust.h -c $*.c -o $@

clean:
	@echo "Cleaning .o from libft processing ..."
	@rm -rf $(OBJ)
	@echo "Cleaning .o from libft completed !"

fclean: clean
	@echo "Fcleaning from libft processing ..."
	@rm -f $(NAME)
	@echo "Fcleaning from libft completed !"

re: fclean all

.PHONY: all clean fclean re

.PHONY: all clean fclean re
