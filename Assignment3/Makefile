PROJECT = Assignment3
TEST_PROJECT = Assignment3_tests
CXX = clang++-15
CXXFLAGS = -Wall -Wextra -pthread -std=c++17 -I/usr/include
GTEST_LIBS = -lgtest -lgtest_main -pthread

SRCS = Transformer.cpp Autobot.cpp Decepticon.cpp Dinobot.cpp Weapon.cpp Ally.cpp Direction.cpp
TEST_SRCS = test.cpp Transformer.cpp Autobot.cpp Decepticon.cpp Dinobot.cpp Weapon.cpp Ally.cpp Direction.cpp

OBJS = $(SRCS:.cpp=.o)
TEST_OBJS = $(TEST_SRCS:.cpp=.o)

all: $(PROJECT)

test: $(TEST_PROJECT)
	./$(TEST_PROJECT)

$(PROJECT): $(OBJS)
	$(CXX) -o $@ $^ $(CXXFLAGS)

$(TEST_PROJECT): $(TEST_OBJS)
	$(CXX) -o $@ $^ $(GTEST_LIBS) $(CXXFLAGS)

%.o: %.cpp
	$(CXX) -c -o $@ $< $(CXXFLAGS)

clean:
	rm -f $(OBJS) $(TEST_OBJS) $(PROJECT) $(TEST_PROJECT)