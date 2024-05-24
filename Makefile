# **************************************************************************** #
#																			  #
#														 :::	  ::::::::	#
#	Makefile										   :+:	  :+:	:+:	#
#													 +:+ +:+		 +:+	  #
#	By: mehakcan <mehakcan@student.42.com.tr>	  +#+  +:+	   +#+		 #
#												 +#+#+#+#+#+   +#+			#
#	Created: 2024/05/18 15:57:38 by mehakcan		  #+#	#+#			  #
#	Updated: 2024/05/18 16:53:42 by mehakcan		 ###   ########.fr		#
#																			  #
# **************************************************************************** #

NAME = push_swap

SRC = push_swap.c	\
	rules_a.c	\
	rules_b.c	\
	utils.c		\
	exit.c		\
	radix_sort.c \
	selection_sort.c

OBJ = $(SRC:.c=.o)
CC = cc
CFLAGS = -g -Wall -Wextra -Werror
LIBFT = libft/libft.a

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(LIBFT)

$(LIBFT):
	$(MAKE) -C libft

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(MAKE) -C libft clean
	rm -f $(OBJ)

fclean: clean
	$(MAKE) -C libft fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
