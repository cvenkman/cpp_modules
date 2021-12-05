NAME = PhoneBook

SRCS =	PhoneBook.cpp main.cpp Contact.cpp

OBJS = $(SRCS:.cpp=.o)

HEADER = PhoneBook.hpp Contact.hpp

FLAGS = -Wall -Wextra -Werror

RM = rm -f

all : $(NAME)

$(NAME) : $(OBJS) $(HEADER)
	c++ $(FLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: clean fclean re all