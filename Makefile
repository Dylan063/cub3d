# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dravaono <dravaono@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/05 19:04:34 by dravaono          #+#    #+#              #
#    Updated: 2024/07/30 19:44:02 by dravaono         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	utils_for_cpy_tab_maps.c\
		map_final_function.c\
		utils_for_maps.c\
		main.c\
		function_free.c\
		$(addprefix first_part/, check_file_nd_cpy.c\
									cpy_tab_textur.c\
									parsing_tab_direction.c\
									size_str_texture_2.c\
									size_str_texture.c\
									parsing_tab_texture.c\
									tab_to_int.c)

OBJS = ${SRCS:.c=.o}
NAME = cub3d
CC = gcc
FLAGS = -Wall -Wextra -Werror -g3 #-fsanitize=address
RM = rm -rf
LIBFT = ./libft

all: ${NAME}

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

.PHONY: all clean fclean re