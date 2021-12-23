NAME = materia

SRCS =	main.cpp srcs/AMateria.cpp \
		srcs/Character.cpp srcs/Ice.cpp \


OBJS = $(SRCS:.cpp=.o)

OBJS_WRONG = $(SRCS_WRONG:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

HEADER = includes/AMateria.hpp includes/ICharacter.hpp \
		includes/Ice.hpp includes/Character.hpp 

all : $(NAME)

$(NAME) : $(OBJS) $(HEADER)
	c++ $(OBJS) $(FLAGS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: clean fclean re all
