#compiler and flags for it
CC='g++'
FLAGS='-c'

#the following compiles and links all the files needed

all: ttt 

ttt: human_input.o board.o ai.o utils.o main.o
	@echo 'Linking object files...'  
	@$(CC) board.o ai.o main.o human_input.o utils.o -o game
	@echo 'Done' > /dev/null  

human_input.o: human_input.cpp
	@echo 'Compiling $^...'
	@$(CC) $(FLAGS) human_input.cpp
	@echo 'Done.'

board.o: board.cpp
	@echo 'Compiling $^...'
	@$(CC) $(FLAGS) board.cpp
	@echo 'Done.'

ai.o: ai.cpp
	@echo 'Compiling $^...'
	@$(CC) $(FLAGS) ai.cpp
	@echo 'Done.'

utils.o: utils.cpp
	@echo 'Compiling $^...'
	@$(CC) $(FLAGS) utils.cpp
	@echo 'Done.'

main.o: main.cpp
	@echo 'Compiling $^...'
	@$(CC) $(FLAGS) main.cpp
	@echo 'Done.'

clean:
	@echo 'Removing all object-files and executable...'
	@rm *.o game
	@echo 'Done.'
