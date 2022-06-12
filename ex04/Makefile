
# **************************************************************************** #
#                                  COLORS                                      #
# **************************************************************************** #

GREEN		= \033[32;1m
RED			= \033[31;1m
YELLOW		= \033[33;1m
CYAN		= \033[36;1m
RESET		= \033[0m
WHITE 		= \033[0;m

# **************************************************************************** #
#                          PROJECT'S DIRECTORIES                               #
# **************************************************************************** #

NAME			= replace

DIRSRC			= src/

DIROBJ			= objs/

# **************************************************************************** #
#                         COMPILATION AND LINK FLAGS                           #
# **************************************************************************** #

CC				= c++

CFLAGS 			= -Wall -Wextra -Werror -std=c++98

INCLUDES 		= -I /includes

LDFLAGS			=


# **************************************************************************** #
#                                SOURCE FILES                                  #
# **************************************************************************** #

SRC = main.cpp

OBJ := $(SRC:.cpp=.o)


DIROBJS	= $(addprefix $(DIROBJ), $(OBJ))

# **************************************************************************** #
#                             MAKEFILE'S RULES                                 #
# **************************************************************************** #


all: 	$(NAME)

$(DIROBJ)%.o:./%.c
			mkdir -p $(DIROBJ)
			$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME):
			@printf "\033[2K\r $(_YELLOW)Compiling $< $(_END)⌛"
			@$(CC) $(CFLAGS) $(SRC) $(INCLUDES)  $(LDFLAGS) -o $@
			@printf "\n[$(GREEN)OK$(WHITE)] $(NAME) generated \n"


clean:
			@rm -rf $(OBJS)	$(DIROBJ)
			@printf "\n[$(GREEN)cleaned$(WHITE)] .o FILES \n"

fclean:		clean
			@rm -rf $(NAME)
			@printf "\n[$(GREEN)cleaned$(WHITE)] $(NAME) \n"

re:			fclean all

.PHONY: all clean fclean re

