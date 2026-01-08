# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/18 11:01:48 by majkijew          #+#    #+#              #
#    Updated: 2026/01/04 16:42:29 by majkijew         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98

NAME := out
SRC := main.cpp 

OBJ_DIR := obj
OBJ := $(SRC:%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME) 

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@ 

clean:
	rm -rf $(OBJ_DIR)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re