# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/26 21:20:54 by mcerquei          #+#    #+#              #
#    Updated: 2022/06/03 20:46:03 by mcerquei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

# abre o diretorio libft e roda o comando make
MAKE_LIBFT = cd libft && make

# copia a libft.a para a libftprintf
CP_LIBFT = cp ./libft/libft.a $(NAME)

# clean na libft.a que esta no diretorio atual
FCLEAN_LIBFT = cd libft && make fclean

CFLAGS = -Wall -Wextra -Werror

CC = gcc

AR = ar rcs

RM = rm -rf

SRC =	ft_printf.c ft_printf_str.c ft_printf_char.c ft_printf_signed_int.c \
		ft_printf_percent.c ft_printf_unsigned_int.c ft_printf_lower_hex.c \
		ft_printf_upper_hex.c 

SRC_OBJ = $(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(SRC_OBJ)
	$(MAKE_LIBFT)
	$(CP_LIBFT)
	$(FCLEAN_LIBFT)
	$(AR) $(NAME) $(SRC_OBJ) 

$(SRC_OBJ):
	$(CC) $(CFLAGS) -c $(SRC)

run: cmp
	./a.out main.o

cmp: all
	$(CC) -g $(CFLAGS) $(SRC) libftprintf.a main.c

run_clean: clean fclean
	$(RM) ./a.out main.o

clean:
	$(RM) $(SRC_OBJ) $(BONUS_OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re bonus