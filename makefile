dir_out := output
dir_exe := executes
filepath := Array
filename := ThirdMaximumNumber
type := cpp
CC := g++
opt := -g -std=c++17 -v

run: build
	./$(dir_exe)/$(filename)

build:
	$(CC) $(opt) -o ./$(dir_exe)/$(filename) $(filepath)/$(filename).$(type)



clean:
	rm -rf ./$(dir_exe)/$(filename)