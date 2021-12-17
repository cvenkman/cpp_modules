NAME = animal

NAME_WRONG = wrong_cat

SRCS =	main.cpp srcs/Animal.cpp srcs/Dog.cpp srcs/Cat.cpp 

SRCS_WRONG = wrong_animal_class/WrongCat.cpp \
				wrong_animal_class/WrongAnimal.cpp \
				wrong_animal_class/wrong_main.cpp

OBJS = $(SRCS:.cpp=.o)

OBJS_WRONG = $(SRCS_WRONG:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

HEADER = includes/Animal.hpp includes/Dog.hpp includes/Cat.hpp

HEADER_WRONG = wrong_animal_class/WrongCat.hpp \
				wrong_animal_class/WrongAnimal.hpp

all : $(NAME)

$(NAME) : $(OBJS) $(HEADER)
	c++ $(OBJS) $(FLAGS) -o $(NAME)

wrong_cat:  $(OBJS_WRONG) $(HEADER_WRONG)
	c++ $(OBJS_WRONG) $(FLAGS) -o $(NAME_WRONG)

clean:
	rm -f $(OBJS) $(OBJS_WRONG)

fclean : clean
	rm -f $(NAME) $(NAME_WRONG)

re : fclean all

.PHONY: clean fclean re all wrong_cat
