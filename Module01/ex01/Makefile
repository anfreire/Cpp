# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anfreire <anfreire@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/01 00:01:22 by anfreire          #+#    #+#              #
#    Updated: 2023/03/04 20:35:38 by anfreire         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Moar_brainz!


SRCS = main.cpp \
		Zombie.cpp \
		zombieHorde.cpp \
		
		


OBJS = $(SRCS:.cpp=.o)


CC = @g++


CFLAGS = -Wall -Wextra -Werror -std=c++98


all : $(NAME)


$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo
	@echo "\033[1;32mâ ./$(NAME) built successfully\033[0m"
	@echo
	@echo
	@echo "\033[1;34mð¤ Made by anfreire\033[0m"
	@echo
	@echo "\033[1;34mð anfreire.me\033[0m"


%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@
	@echo
	@echo "\033[1;32mâ Object files built successfully\033[0m"
	@echo


clean:
	@rm -f $(OBJS)
	@echo
	@echo "\033[1;33mð® Object files deleted\033[0m"
	@echo


fclean : clean
	@rm -f $(NAME)
	@echo
	@echo "\033[1;33mð® ./$(NAME) deleted\033[0m"
	@echo


re: fclean all


.PHONY: all clean fclean re
