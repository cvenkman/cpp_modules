NAME = brainzz

SRCS =	main.cpp HumanA.cpp HumanB.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

HEADER = HumanA.hpp Weapon.hpp HumanB.hpp

all : $(NAME)

$(NAME) : $(OBJS) $(HEADER)
	c++ $(OBJS) $(FLAGS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: clean fclean re all
