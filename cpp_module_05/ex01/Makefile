NAME = program

SRCS =	Bureaucrat.cpp main.cpp Form.cpp

OBJS = $(SRCS:.cpp=.o)

DEP = $(OBJS:%.o=%.d)

HEADER = Bureaucrat.hpp Form.hpp

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