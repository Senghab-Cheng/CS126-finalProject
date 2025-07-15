CXX = g++
CXXFLAGS = -std=c++11 \
-I/opt/homebrew/opt/opencv/include/opencv4
LDFLAGS = -L/opt/homebrew/opt/opencv/lib \
-lopencv_core -lopencv_imgcodecs -lopencv_highgui -lopencv_imgproc

SRC = main.cpp pizza.cpp
OUT = my_project

all:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(OUT) $(LDFLAGS)
