NAME = progarm

SRCS =	main.cpp

OBJS = $(SRCS:.cpp=.o)

DEP = $(OBJS:%.o=%.d)

HEADER = iter.hpp

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJS) $(HEADER)
	c++ $(FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: clean fclean re all