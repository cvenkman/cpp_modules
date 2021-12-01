NAME = PhoneBook

SRCS =	PhoneBook.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

HEADER = PhoneBook.hpp Contact.hpp

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJS) $(HEADER)
	clang++ $(OBJS) $(FLAGS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: clean fclean re all