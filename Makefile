# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aboiarin <aboiarin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/28 16:53:13 by aboiarin          #+#    #+#              #
#    Updated: 2023/11/01 17:42:41 by aboiarin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

NAME = push_swap

LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

SRC = main.c push.c swap.c rotate.c reverse_rotate.c cases.c utils.c if_more.c

OBJ = $(SRC:.c=.o)

all: start_message $(NAME) success_message

bonus: all

.o:	.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(LIBFT) $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

$(LIBFT):
	@echo 'Compiling libft... 📀'
	@make -C $(LIBFT_PATH) all
	@echo 'libft done ✅'
	
clean:
	@$(RM) $(OBJ)
	@make -C $(LIBFT_PATH) clean
	@echo 'Object files removed ✨'

start_message:
	@echo 'Compiling push_swap... 🌊'

success_message:
	@echo 'All done ✅'

re_message:
	@echo 'Starting over... ⏪'

fclean:	clean
		@make -C $(LIBFT_PATH) fclean
		@$(RM) $(NAME)
		@echo 'Executables removed ✨'

re: re_message fclean all

.PHONY: all clean fclean re bonus