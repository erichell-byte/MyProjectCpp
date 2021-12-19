NAME = convert

SRCS = main.cpp Convert.cpp


OBJS = $(SRCS:%.cpp=%.o)


##CLANG =     clang++

CLANG = g++

##CPPFLAGS =  -Wall -Wextra -Werror -std=c++98

RM =        rm -f

all :       ${NAME}

$(NAME) :   $(OBJS) 
			$(CLANG) $(CPPFLAGS) $(OBJS) -o $@

%.o:  %.cpp
			${CLANG} $(CPPFLAGS) -o $@ -c $<


clean :     
			$(RM) $(OBJS)


fclean  :   clean
			$(RM) ${NAME}

re :        fclean all

.PHONY :    all clean fclean re