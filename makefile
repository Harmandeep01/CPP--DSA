# Compiler
CXX = g++

# Compiler Flags
CXXFLAGS = -Wall -Wextra -std=c++17

# Find the most recently modified .cpp file
LAST_MODIFIED := $(shell find . -type f -name "*.cpp" -printf "%T@ %p\n" | sort -nr | awk 'NR==1 {print $$2}')

# Rule to compile and run the last modified file
run:
	@if [ -z "$(LAST_MODIFIED)" ]; then \
		echo "No C++ files found!"; \
	else \
		echo "Compiling and running: $(LAST_MODIFIED)"; \
		$(CXX) $(CXXFLAGS) -o program $(LAST_MODIFIED) && ./program; \
	fi

# Clean compiled files
clean:
	rm -f program
