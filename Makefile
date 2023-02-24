# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gromero- <gromero-@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/13 10:50:16 by gromero-          #+#    #+#              #
#    Updated: 2023/02/22 12:52:05 by gromero-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRC		=	source/ft_putchar.c source/ft_puthexa.c source/ft_putnbr.c \
			source/ft_putnbr_hexa.c source/ft_putnnbr.c source/ft_putstr.c \
			source/ft_utils.c source/ft_printf.c

SRC_B	=	source_bonus/ft_printf_bonus.c source_bonus/ft_putchar_bonus.c \
			source_bonus/ft_puthnbr_bonus.c	source_bonus/ft_putnbr_bonus.c \
			source_bonus/ft_putstr_bonus.c source_bonus/ft_putunbr_bonus.c \
			source_bonus/ft_putvoid_bonus.c source_bonus/ft_plus_bonus.c \
			source_bonus/ft_space_bonus.c source_bonus/ft_utils_bonus.c \
			source_bonus/ft_sharp_bonus.c source_bonus/ft_zero_bonus.c \
			source_bonus/ft_dot_bonus.c source_bonus/ft_minus_bonus.c

OBJ_SRC	=	$(SRC:.c=.o)

OBJ_B	=	$(SRC_B:.c=.o)

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror

$(NAME):
		$(CC) -c $(CFLAGS) $(SRC)
		mv *.o source 
		ar crs  $(NAME) $(OBJ_SRC)
	
bonus:	
		$(CC) -c $(CFLAGS) $(SRC_B)
		mv *.o source_bonus
		ar crs $(NAME) $(OBJ_B)

all:	$(NAME)

clean:
		rm -f $(OBJ_SRC) $(OBJ_B)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY: all clean fclean re
