NAME = clap_trap

SRCS =	main.cpp ClapTrap.cpp ScavTrap.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

HEADER = ClapTrap.hpp ScavTrap.hpp

all : $(NAME)

$(NAME) : $(OBJS) $(HEADER)
	c++ $(OBJS) $(FLAGS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: clean fclean re all
