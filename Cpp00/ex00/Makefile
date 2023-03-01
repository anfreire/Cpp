# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anfreire <anfreire@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/01 00:01:22 by anfreire          #+#    #+#              #
#    Updated: 2023/03/01 00:58:07 by anfreire         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = megaphone


SRCS = megaphone.cpp


OBJS = $(SRCS:.cpp=.o)


CC = @g++


CFLAGS = -Wall -Wextra -Werror -std=c++98


all : $(NAME)


$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo
	@echo "\033[1;32m✅ ./$(NAME) built successfully ✅\033[0m"
	@echo
	@echo
	@echo "\033[1;34m👤 Made by anfreire\033[0m"
	@echo
	@echo "\033[1;34m🌐 anfreire.me\033[0m"


%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@
	@echo
	@echo "\033[1;32m✅ Object files built successfully ✅\033[0m"
	@echo


clean:
	@rm -f $(OBJS)
	@echo
	@echo "\033[1;33m🚮 Object files deleted 🚮\033[0m"
	@echo


fclean : clean
	@rm -f $(NAME)
	@echo
	@echo "\033[1;33m🚮 ./$(NAME) deleted 🚮\033[0m"
	@echo


re: fclean all


.PHONY: all clean re