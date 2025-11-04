NAME		= easyfind

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
OUT_DIR		= ./
SRC_DIR		= ./
SRC			= \
			main.cpp
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