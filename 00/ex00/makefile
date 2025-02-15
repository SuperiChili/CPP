# Variables
CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
TARGET = megaphone
SRC = megaphone.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CPP) $(FLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)

.PHONY: all clean