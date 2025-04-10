# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbaumgar <mbaumgar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/17 14:57:46 by mbaumgar          #+#    #+#              #
#    Updated: 2025/04/01 09:28:31 by mbaumgar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ScavTrap

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
SRC			= main.cpp ClapTrap.cpp ScavTrap.cpp
OBJ			= $(SRC:%.cpp=%.o)

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

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) $(INC) -g3 -c $< -o $@

clean:
	@$(RM) $(OBJ)
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
