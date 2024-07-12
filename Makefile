# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/05 19:04:34 by dravaono          #+#    #+#              #
#    Updated: 2024/07/12 18:50:44 by dravaono         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = parsing.c mapmparsing.c mapmparsingtwo.c utils.c utilstwo.c \
		mallocstrmparsing.c mapcolor.c\


OBJS = ${SRCS:.c=.o}
NAME = cub3d
CC = gcc
FLAGS = -Wall -Wextra -Werror -g3
RM = rm -rf
LIBFT = ./libft

all : ${NAME}

${NAME}: ${OBJS}
		 ${MAKE} -C ${LIBFT}/	
		 ${CC} ${FLAGS} ${OBJS} ${LIBFT}/libft.a -o $(NAME)

.c.o:
		${CC} ${FLAGS} -c $< -o ${<:.c=.o}

clean: 
		${MAKE} clean -C ${LIBFT}/
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME} ${LIBFT}/libft.a

re: fclean all

.PHONY: all clean flcean re
