# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/26 21:20:54 by mcerquei          #+#    #+#              #
#    Updated: 2022/06/09 02:54:46 by mcerquei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

MAKE_LIBFT = cd libft && make

CP_LIBFT = cp ./libft/libft.a $(NAME)

FCLEAN_LIBFT = cd libft && make fclean

CFLAGS = -Wall -Wextra -Werror

CC = gcc

AR = ar rcs

RM = rm -rf

SRC =	ft_printf.c ft_printf_str.c ft_printf_char.c ft_printf_signed_int.c \
		ft_printf_percent.c ft_printf_unsigned_int.c ft_printf_lower_hex.c \
		ft_printf_upper_hex.c ft_printf_pointer.c

SRC_OBJ = $(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(SRC_OBJ)
	$(MAKE_LIBFT)
	$(CP_LIBFT)
	$(FCLEAN_LIBFT)
	$(AR) $(NAME) $(SRC_OBJ) 

$(SRC_OBJ):
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	$(RM) $(SRC_OBJ) $(BONUS_OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re bonus