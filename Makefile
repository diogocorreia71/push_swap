# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diodos-s <diodos-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/04 14:13:07 by diodos-s          #+#    #+#              #
#    Updated: 2023/10/10 15:01:01 by diodos-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ${wildcard *.c}

NAME = push_swap

OBJS = ${SRC:.c=.o}

RM = rm -f

FLAGS = -Wall -Wextra -Werror -g

MAKE = make -C

LIBFT_PATH = libft

LIBFT = -L ${LIBFT_PATH} -lft

all: ${NAME}

${NAME}: ${OBJS}
						${MAKE} ${LIBFT_PATH}
						cc ${FLAGS} ${OBJS} ${LIBFT} -o ${NAME}
						
clean:
						${MAKE} ${LIBFT_PATH} clean
						${RM} ${OBJS}

fclean: clean
						${MAKE} ${LIBFT_PATH} fclean
						${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re

.SILENT: