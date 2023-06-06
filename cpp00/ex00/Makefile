# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: colas <colas@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/01 00:25:35 by colas            #+#    #+#              #
#    Updated: 2023/05/26 18:45:39 by colas            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Megaphone
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

#Colors:
GREEN		=	\e[33;1;32m
RED			=	\e[33;1;31m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m

OBJS		=  Megaphone.cpp

all: $(NAME)

$(NAME): $(OBJS)
	@printf "$(GRAY) 	- Compiling $(NAME)... $(RESET)\n"
	@ $(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@printf "$(GREEN)    - Executable ready.\n$(RESET)"

$(OBJS)%.o: %.cpp $(HEADER)
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(NAME)
	@printf "$(RED)    - Executable removed.$(RESET)\n"

fclean:
	@$(RM) $(NAME)
	@printf "$(RED)    - Executable removed.$(RESET)\n"

re: clean all

.PHONY: all clean re