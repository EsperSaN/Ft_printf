# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pruenrua <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/03 15:27:20 by pruenrua          #+#    #+#              #
#    Updated: 2022/09/03 16:13:16 by pruenrua         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME : libftprintf.a

CC : gcc

CFLAG : -Wall -Werror -Wextra

AR : ar -rcs

SRC : ft_printf.c ft_printnbr.c ft_printchr.c

OBJ : $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean $(NAME)

.PHONY : all clean fclean re
