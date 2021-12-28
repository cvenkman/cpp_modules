NAME = materia

SRCS =	main.cpp srcs/AMateria.cpp srcs/Cure.cpp\
		srcs/Character.cpp srcs/Ice.cpp srcs/MateriaSource.cpp\

OBJS = $(SRCS:.cpp=.o)

OBJS_WRONG = $(SRCS_WRONG:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

CC		= c++ -std=c++98

HEADER = includes/AMateria.hpp includes/ICharacter.hpp \
		includes/Ice.hpp includes/Character.hpp includes/IMateriaSource.hpp \
		includes/MateriaSource.hpp includes/Cure.hpp

all : $(NAME)

$(NAME) : $(OBJS) $(HEADER)
	$(CC) $(OBJS) $(FLAGS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: clean fclean re all
