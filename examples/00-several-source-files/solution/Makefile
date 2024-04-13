# Note: It seems c++17 and c++20 are not supported
CXX_FLAGS = -std=c++14 -O2
OUTPUT = solution

all: sort

sort:
	g++ $(CXX_FLAGS) main.cpp sort.cpp -o $(OUTPUT)

# Note: Mandatory target
run:
	./${OUTPUT}

clean:
	rm -f *.o $(OUTPUT)

