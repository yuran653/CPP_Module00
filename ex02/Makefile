# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgoldste < jgoldste@student.42bangkok.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/12 16:12:49 by jgoldste          #+#    #+#              #
#    Updated: 2023/07/16 00:42:24 by jgoldste         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
NAME		:= account
CC			:= g++
CFLAGS		:= -Wall -Wextra -Werror -std=c++98
SRCS		:= $(wildcard *.cpp)
OBJS		:= $(patsubst %.cpp,%.o,$(SRCS))
DEPS		:= $(patsubst %.o,%.d,$(OBJS))
INCLUDES	:= -Iincludes
RM			:= rm -rf

# Define color codes for output messages
YELLOW	= "\033[1;33m"
GREEN	= "\033[1;32m"
END		= "\033[0m"

# Declare phony targets
.PHONY: all clean fclean re

# Default target for building the project
all: $(NAME)

# Main target
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	@echo $(GREEN) "\n\tProject is compiled\n" ${END}

# Rule for generating dependency and object files
%.o: ./%.cpp $(HDR)
	$(CC) $(CFLAGS) $(INC) -g -c -o $@ $< -MD

# Target for cleaning the project
clean:
	@$(RM) $(OBJS) $(DEPS)
	@echo $(YELLOW) "\n\tProject 'clean' status: DONE\n" ${END}

# Target for fully cleaning the project
fclean: clean
	@$(RM) $(NAME)
	@echo $(YELLOW) "\n\tProject 'clean' status: DONE\n" ${END}

# Target for rebuilding the project
re: fclean all
