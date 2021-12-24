NAME = weapon

FILES = $(wildcard *.cpp)
O_FILES = $(FILES:.cpp=.o)
FLAGS = -g -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(O_FILES)
	@clang++ -g $(FLAGS) $(O_FILES) -o $(NAME)
	@echo "${NAME} compiled!"

%.o: %.cpp
	@clang++ -c $<

clean:
	@rm -f $(O_FILES)
fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re