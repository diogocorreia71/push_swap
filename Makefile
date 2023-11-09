# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diodos-s <diodos-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/04 14:13:07 by diodos-s          #+#    #+#              #
#    Updated: 2023/11/09 09:01:40 by diodos-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = error_free.c push_command.c push_swap_command.c push_swap_init.c push_swap.c\
		reverse_rotate_command.c rotate_command.c stack_init.c stack_utils.c\
		swap_command.c tiny_sort.c

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
