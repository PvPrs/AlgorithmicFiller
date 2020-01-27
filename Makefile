# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: bprado <bprado@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2019/12/17 16:46:40 by bprado         #+#    #+#                 #
#    Updated: 2019/12/17 20:46:31 by bprado        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME				= filler

LIB_PATH			= ./libft/


DEPENDENCIES		= -lft -L $(LIB_PATH) $(INC)

SRC					= $(wildcard src/*.c)

INC					= -I includes -I libft/includes

OBJ					= $(patsubst src/%.c,obj/%.o,$(SRC))

CFLAGS				= -Wall -Werror -Wextra

all: $(NAME)

$(NAME): libft/libft.a $(OBJ)
	@echo "something magical is about to happen..."
	@$(CC) $(OBJ) $(DEPENDENCIES) -o $(NAME)

obj/%.o: src/%.c includes/filler.h
	@echo "working on object files..."
	@mkdir -p obj
	@$(CC) -c $(CFLAGS) $(INC) -o $@ $<

libft/libft.a: FORCE
	@echo "Homemade libft..."
	@$(MAKE) -C $(LIB_PATH)

clean:
	@echo "lets clean..."
	@$(MAKE) clean -C $(LIB_PATH)
	@rm -rf obj

fclean:	clean
	@$(MAKE) fclean -C $(LIB_PATH)
	@rm -f $(NAME)

re:	fclean all

FORCE:

.PHONY: all clean fclean re FORCE