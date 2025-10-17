# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/23 11:56:37 by mbaumgar          #+#    #+#              #
#    Updated: 2025/09/23 11:56:39 by mbaumgar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= serializer

# ╔═╗╦  ╔═╗╔═╗╔═╗
# ╠╣ ║  ╠═╣║ ╦╚═╗
# ╚  ╩═╝╩ ╩╚═╝╚═╝
CXX			= c++
ARFLAGS 	= -crs
RM			= rm -rf
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

# ╔═╗╔═╗╦ ╦╦═╗╔═╗╔═╗╔═╗
# ╚═╗║ ║║ ║╠╦╝║  ║╣ ╚═╗
# ╚═╝╚═╝╚═╝╩╚═╚═╝╚═╝╚═╝
OUT_DIR		= ./objs/
SRC_DIR		= ./src/
SRC			= \
			main.cpp \
			Serializer.cpp
OBJ			= $(SRC:%.cpp=$(OUT_DIR)%.o)

# ╔═╗╔═╗╦  ╔═╗╦═╗╔═╗
# ║  ║ ║║  ║ ║╠╦╝╚═╗
# ╚═╝╚═╝╩═╝╚═╝╩╚═╚═╝
RED			= \033[0;31m
END			= \033[m

# ╦═╗╦ ╦╦  ╔═╗╔═╗
# ╠╦╝║ ║║  ║╣ ╚═╗
# ╩╚═╚═╝╩═╝╚═╝╚═╝

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

$(OUT_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p $(OUT_DIR)
	@$(CXX) $(CXXFLAGS) $(INC) -g3 -c $< -o $@

clean:
	@$(RM) $(OBJ)
	@$(RM) $(OUT_DIR)
	@echo "🧹 $(RED)removed:$(END) objects"

fclean: clean
	@$(RM) $(NAME)
	@echo "🧹 $(RED)removed:$(END) executable\n"

re: fclean all

git: fclean
	cd ..
	git add .
	git commit -m "$(m)"
	git push

.PHONY: all clean fclean re git