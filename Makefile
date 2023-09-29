# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aboiarin <aboiarin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/28 16:53:13 by aboiarin          #+#    #+#              #
#    Updated: 2023/09/29 13:32:38 by aboiarin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

NAME = push_swap

SRC = push_swap.c

OBJ = $(SRC:.c=.o)
OBJ_L = $(SRC_L:.c=.o)

all: start_message $(NAME) success_message

bonus: all

.o:		.c
		$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJ_S)
	@$(CC) $(CFLAGS) $(OBJ_S) -o $(NAME_S)

clean:
	@$(RM) $(OBJ_S) $(OBJ_C)
	@echo 'Object files removed ✨'

start_message:
	@echo 'Compiling... 🌊'

success_message:
	@echo 'Done ✅'

re_message:
	@echo 'Starting over... ⏪'

fclean:	clean
		@$(RM) $(NAME_S) $(NAME_C)
		@echo 'Executables removed ✨'

re: re_message fclean all

.PHONY: all clean fclean re bonus