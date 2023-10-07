# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: boiarinov <boiarinov@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/28 16:53:13 by aboiarin          #+#    #+#              #
#    Updated: 2023/10/06 18:22:32 by boiarinov        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

NAME = push_swap

SRC = push_swap.c push.c swap.c rotate.c reverse_rotate.c cases.c utils.c

OBJ = $(SRC:.c=.o)

all: start_message $(NAME) success_message

bonus: all

.o:		.c
		$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	@$(RM) $(OBJ)
	@echo 'Object files removed ✨'

start_message:
	@echo 'Compiling... 🌊'

success_message:
	@echo 'Done ✅'

re_message:
	@echo 'Starting over... ⏪'

fclean:	clean
		@$(RM) $(NAME)
		@echo 'Executables removed ✨'

re: re_message fclean all

.PHONY: all clean fclean re bonus