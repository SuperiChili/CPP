CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -Iincludes

TARGET = fight
SRCDIR = src
INCDIR = includes
OBJDIR = obj

SRCS = $(SRCDIR)/main.cpp $(SRCDIR)/ClapTrap.cpp $(SRCDIR)/ScavTrap.cpp $(SRCDIR)/FragTrap.cpp $(SRCDIR)/DiamondTrap.cpp 
OBJS = $(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SRCS))

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -f $(OBJS)
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re
