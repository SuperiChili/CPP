CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -g -std=c++98 -Iincludes

TARGET = animale
SRCDIR = src
INCDIR = includes
OBJDIR = obj

SRCS = $(SRCDIR)/main.cpp $(SRCDIR)/Animal.cpp $(SRCDIR)/Dog.cpp \
 	   $(SRCDIR)/Cat.cpp $(SRCDIR)/WrongAnimal.cpp $(SRCDIR)/WrongCat.cpp \
	   $(SRCDIR)/Brain.cpp
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
