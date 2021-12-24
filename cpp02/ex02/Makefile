NAME = fixedfinal

FILES = $(wildcard *.cpp)
O_FILES = $(FILES:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(O_FILES)
	@clang++ $(FLAGS) $(O_FILES) -o $(NAME)
	@echo "${NAME} compiled!"

%.o: %.cpp
	@clang++ -g -c $<

clean:
	@rm -f $(O_FILES)
fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re