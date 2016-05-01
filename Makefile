.PHONY: test clean

CPP=g++
CPPFLAGS=-O3 -std=c++11
SRC_FOLDER=src
TEST_FOLDER=test
MAIN_FILE=main.cpp
EXE=grnn

all:
	@$(CPP) $(CPPFLAGS) $(SRC_FOLDER)/*.cpp $(MAIN_FILE) -o $(EXE)

test:
	@$(CPP) $(CPPFLAGS) $(SRC_FOLDER)/*.cpp $(TEST_FOLDER)/*.cpp -o $(EXE) && ./$(EXE)

clean:
	@rm ./$(EXE)

