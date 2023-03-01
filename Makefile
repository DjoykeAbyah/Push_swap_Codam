# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dreijans <dreijans@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/02/01 19:24:21 by dreijans      #+#    #+#                  #
#    Updated: 2023/03/01 13:08:36 by dreijans      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

CC = cc
SRC = \
push_swap.c \
push_swap_commands.c \
main.c 
OBJ_FILES = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror -g
LIB = $(LIBDIR)/libft.a
LIBDIR = Libft

.PHONY: all clear fclean re

all: $(NAME)

$(LIB):
	$(MAKE) -C $(LIBDIR) all --quiet
	
$(NAME): $(OBJ_FILES) $(LIB)
		cp $(LIB) $(NAME)
		ar -src $(NAME) $(OBJ_FILES) 

%.o: %.c
		@$(CC) -c $(CFLAGS) -o $@ $^

clean:
		$(RM) $(OBJ_FILES)
		$(MAKE) -C $(LIBDIR) clean 

fclean: 
		$(RM) $(OBJ_FILES)
		$(RM) $(NAME)
		$(MAKE) -C $(LIBDIR) fclean

re: fclean all

test: re
	gcc $(NAME) -g -fsanitize=address
	./a.out 0 123 6 4