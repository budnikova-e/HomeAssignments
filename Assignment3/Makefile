PROJECT = Assignment3
CXX = clang++-15
CXXFLAGS = -Wall -Wextra -pthread 
SRCS = Transformer.cpp Autobot.cpp Decepticon.cpp Dinobot.cpp Weapon.cpp Ally.cpp Direction.cpp
OBJS = $(SRCS:.cpp=.o)

.PHONY: all clean cleanall

all: $(PROJECT)

$(PROJECT): $(OBJS)
	$(CXX) -o $@ $^ $(CXXFLAGS)

%.o: %.cpp
	$(CXX) -c -o $@ $< $(CXXFLAGS)

clean:
	rm -f $(OBJS) $(PROJECT)