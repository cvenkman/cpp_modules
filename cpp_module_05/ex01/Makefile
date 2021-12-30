NAME = bzzz

SRCS =	Bureaucrat.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

DEP = $(OBJS:%.o=%.d)

HEADER = Bureaucrat.hpp

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