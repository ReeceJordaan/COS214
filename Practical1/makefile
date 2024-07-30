CXX = g++
CXXFLAGS = -std=c++11 -Wall -g
TARGET = main
SRCS = $(wildcard *.cpp)

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)