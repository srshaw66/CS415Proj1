CXX := g++
CXXFLAGS := -std=c++17 -Wall -Wextra -pedantic

TARGET := main
SOURCE := main.cpp Sequences.cpp Exponentiations.cpp

.PHONY: all run clean

all: $(TARGET)

$(TARGET): $(SOURCE)
	$(CXX) $(CXXFLAGS) $(SOURCE) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)
