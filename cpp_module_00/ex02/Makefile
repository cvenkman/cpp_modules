NAME = bzzz

SRCS =	Account.cpp test.cpp

OBJS = $(SRCS:.cpp=.o)

DEP = $(OBJS:%.o=%.d)

HEADER = Account.hpp

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJS) $(HEADER)
	c++ $(FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: clean fclean re all