NAME = PhoneBook

SRCS =	PhoneBook.cpp

OBJS = $(SRCS:.cpp=.o)

HEADER = 

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJS)
	clang++ $(OBJS) $(FLAGS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: clean fclean re all
