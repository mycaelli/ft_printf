# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/26 21:20:54 by mcerquei          #+#    #+#              #
#    Updated: 2022/06/03 20:50:26 by mcerquei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror -I. -c

CC = gcc

AR = ar rcs

RM = rm -rf

SRC = 	ft_isalpha.c \
      	ft_isdigit.c \
	  	ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_memset.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strchr.c \
		ft_strlcat.c \
		ft_strrchr.c \
		ft_strncmp.c \
        ft_strnstr.c \
        ft_bzero.c \
        ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
        ft_substr.c \
		ft_strjoin.c \
        ft_strtrim.c \
        ft_itoa.c \
        ft_strmapi.c \
        ft_striteri.c \
        ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
        ft_split.c \
		ft_uitoa.c \
		ft_hexitoa.c \
		ft_islowercase.c \
		ft_isuppercase.c

BONUS =	ft_lstadd_back.c \
		ft_lstadd_front.c \
		ft_lstclear.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstlast.c \
		ft_lstmap.c \
		ft_lstnew.c \
		ft_lstsize.c

SRC_OBJ = $(SRC:.c=.o)

BONUS_OBJ = $(BONUS:.c=.o)

$(NAME):	$(SRC_OBJ)
	$(AR) $(NAME) $(SRC_OBJ)

$(SRC_OBJ):
	$(CC) $(CFLAGS) $(SRC)

$(BONUS_OBJ):
	$(CC) $(CFLAGS) $(BONUS)

all:	$(NAME)

bonus:	$(OBJ) $(BONUS_OBJ)
	$(AR) $(NAME) $(OBJ) $(BONUS_OBJ)

clean:
	$(RM) $(SRC_OBJ) $(BONUS_OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re bonus