NAME = animal

SRCS =	main.cpp srcs/Animal.cpp srcs/Dog.cpp srcs/Cat.cpp 

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

HEADER = includes/Animal.hpp includes/Dog.hpp includes/Cat.hpp

all : $(NAME)

$(NAME) : $(OBJS) $(HEADER)
	c++ $(OBJS) $(FLAGS) -o $(NAME)

clean:
	rm -f $(OBJS) $(OBJS_WRONG)

fclean : clean
	rm -f $(NAME) $(NAME_WRONG)

re : fclean all

.PHONY: clean fclean re all
