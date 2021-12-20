NAME = ex02

SRCS := $(wildcard *.cpp)

OBJS := $(patsubst %.cpp,%.o,$(SRCS))

FLAGS = -Wall -Wextra -Werror --std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	clang++ $(FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

.PHONY: all clean fclean re

re: fclean all