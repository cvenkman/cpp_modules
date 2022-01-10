NAME	=	program

SRCS	=	src/Bureaucrat.cpp main.cpp src/Form.cpp \
			src/ShrubberyCreationForm.cpp \
			src/RobotomyRequestForm.cpp \
			src/PresidentialPardonForm.cpp \
			src/Intern.cpp

OBJS	=	$(SRCS:.cpp=.o)

DEP		=	$(OBJS:%.o=%.d)

HEADER	=	include/Bureaucrat.hpp include/Form.hpp \
			include/ShrubberyCreationForm.hpp \
			include/RobotomyRequestForm.hpp \
			include/PresidentialPardonForm.hpp \
			include/Intern.hpp

FLAGS	=	-Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJS) $(HEADER)
	c++ $(FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: clean fclean re all