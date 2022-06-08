
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

NAME			= zombieland

DIRSRC			= src/

DIROBJ			= objs/

# **************************************************************************** #
#                         COMPILATION AND LINK FLAGS                           #
# **************************************************************************** #

CC				= g++

CFLAGS 			= -Wall -Wextra -Werror

INCLUDES 		= -I /includes

LDFLAGS			=


# **************************************************************************** #
#                                SOURCE FILES                                  #
# **************************************************************************** #

SRC = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

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

# header :
# 	@printf "$(RED)"
# 	@printf "    __  ________   ___________ __  __________    __ \n"
# 	@printf "   /  |/  /  _/ | / /  _/ ___// / / / ____/ /   / / \n"
# 	@printf "  / /|_/ // //  |/ // / \__ \/ /_/ / __/ / /   / /  \n"
# 	@printf " / /  / // // /|  // / ___/ / __  / /___/ /___/ /___\n"
# 	@printf "/_/  /_/___/_/ |_/___//____/_/ /_/_____/_____/_____/\n"
# 	@printf "\n"
# 	@printf "MINISHELL COMPILATION\n"
# 	@printf "$(RESET)"

