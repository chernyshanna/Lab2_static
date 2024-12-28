CXX = g++
CXXFLAGS = -std=c++17 -Wall
LDFLAGS =
SOURCES = main.cpp Worker.cpp Class.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = app

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(LDFLAGS) $(OBJECTS) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf *.o $(EXECUTABLE)
	