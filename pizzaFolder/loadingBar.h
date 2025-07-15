#pragma once

#include <iostream>
#include <sstream>
#include <chrono>
#include <thread>
#include <string>


inline std::string getColor(int progress) {
    int r = (progress * 255) / 100; 
    int g = 255 - r;            
    int b = 0;              
    std::ostringstream colorCode;
    colorCode << "\033[38;2;" << r << ";" << g << ";" << b << "m";
    return colorCode.str();
}


inline void printLoadingBar(int progress, int width) {
    std::cout << "[";
    int pos = width * progress / 100;
    for (int i = 0; i < width; ++i) {
        if (i < pos)
            std::cout << getColor(progress) << "=";
        else
            std::cout << "\033[0m "; 
    }
    std::cout << "\033[0m] " << progress << "%\r"; 
    std::cout.flush();
}


inline void clearLoadingBar(int width) {
    std::cout << "\r" << std::string(width + 10, ' ') << "\r"; 
    std::cout.flush();
}


inline void getLoadingBar() {
    int width = 50;
    for (int i = 0; i <= 100; ++i) {
        printLoadingBar(i, width);
        std::this_thread::sleep_for(std::chrono::milliseconds(100)); 
    }
    clearLoadingBar(width); 
}
void printLoadingBar(int progress, int height);
void clearLoadingBracket(int height);

inline void getLoadingBracket(int height) {
    int width = 30;
    for (int i = 0; i <= 100; ++i) {
        printLoadingBar(i, height);
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
    clearLoadingBracket(height);  
}