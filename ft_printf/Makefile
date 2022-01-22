# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrocky <jrocky@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/04 18:07:31 by jrocky            #+#    #+#              #
#    Updated: 2022/01/06 19:20:14 by jrocky           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	=	libftprintf.a

SRCS	=	ft_printf.c	printf_utils.c

HEADER	= 	ft_printf.h
OBJ		= 	$(patsubst %.c, %.o, $(SRCS))

CC		= 	gcc
FLAGS	= 	-Wall -Wextra -Werror -I.
RM		=	rm -f

all 	:	$(NAME)

$(NAME)	:	$(OBJ) $(HEADER)
		ar rcs $(NAME) $?

%.o		:	%.c $(HEADER)
		$(CC) $(FLAGS) -c $< -o $@

clean	:
		$(RM) $(OBJ)

fclean	:	clean
		$(RM) $(NAME)

re		:	fclean	all

norm	:	$(SRCS) $(NAME) $(HEADER)
		@norminette $(SRCS)	$(HEADER) | grep -v Norme -B1 || true

.PHONY	:	all clean fclean re