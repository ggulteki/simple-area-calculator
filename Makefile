# --------------------------------------------------
# Author: ggulteki
# Last Updated: 2024-10-31
# Usage:
#   make        - Compile the calculator
#   make clean  - Remove the executable
# --------------------------------------------------

CXX = g++
CXXFLAGS = -std=c++14
TARGET = calculator
SRC = calculator.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)