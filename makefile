# Compiler
CXX = g++

# Compiler Flags
CXXFLAGS = -Wall -Wextra -std=c++17

# Default rule to prompt for a filename
run:
	@read -p "Enter the file to compile: " file; \
	$(CXX) $(CXXFLAGS) -o program $$file && ./program

# Clean compiled files
clean:
	rm -f program
