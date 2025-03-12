# Compiler
CXX = g++

# Compiler Flags
CXXFLAGS = -Wall -Wextra -std=c++17

# Rule to compile and run a specific file
run: 
	@echo "Usage: make run FILE=<filename.cpp>"
	@if [ -z "$(FILE)" ]; then \
		echo "Error: No file specified!"; \
	else \
		echo "Compiling and running: $(FILE)"; \
		$(CXX) $(CXXFLAGS) -o program $(FILE) && ./program; \
	fi

# Clean compiled files
clean:
	rm -f program
