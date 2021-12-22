NAME	= program

CC		= g++ -std=c++98

CFLAGS	= -Wall -Wextra -Werror


SRCS =	main.cpp srcs/Animal.cpp srcs/Dog.cpp \
		srcs/Cat.cpp srcs/Brain.cpp

OBJS	= $(SRCS:.cpp=.o)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

all:	${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
			@echo "Cleaning: ${OBJS}"
			@rm -rf ${OBJS}

fclean:		clean
			@rm -rf ${NAME}
			@echo "\033[0mdelete "${NAME}"... \033[32mok\033[0m"

re:			fclean all

.phony: all clean fclean re

