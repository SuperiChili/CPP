CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -g -std=c++98

SRCS = main.cpp phonebook.cpp contact.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = phonebook

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re