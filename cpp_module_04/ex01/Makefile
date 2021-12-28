NAME	= program

SRCS =	main.cpp srcs/Animal.cpp srcs/Dog.cpp \
		srcs/Cat.cpp srcs/Brain.cpp

OBJS = $(SRCS:.cpp=.o)

CC		= c++ -std=c++98

FLAGS = -Wall -Wextra -Werror

HEADER = includes/Animal.hpp includes/Dog.hpp \
		includes/Cat.hpp includes/Brain.hpp

all : $(NAME)

$(NAME) : $(OBJS) $(HEADER)
	$(CC) $(OBJS) $(FLAGS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: clean fclean re all
