#include "pizza.h"
#include <iostream>
#include <opencv2/opencv.hpp>
#define LIGHT_BLUE "\033[38;5;123m"
#define RESET "\033[0m"      

// Set the size of the pizza
void Pizza::setSize(string NewSize) {
    size = NewSize;
}

// Get the size of the pizza
string Pizza::getSize() {
    return size;
}

// Add toppings to the pizza
void Pizza::addToppings(const string& topping) {            
    Toppings.push_back(topping);                           /* push_back(topping) adds the given string to the end of the list. */
}                                                          /* Ex: if u add A, it will be added to toppings. Then if u add B after 
                                                                    that, B will be added after A  */

// Get all toppings
vector<string> Pizza::getToppings() {
    return Toppings;
}

// Set the sauce type
void Pizza::setSauce(string NewSauce) {
    sauce = NewSauce;
}

// Get the sauce type
string Pizza::getSauce() {
    return sauce;
}

// Print all pizza information
void Pizza::getPizzaInfo() {
        cout << "+=================================================================================================+" << endl;
        cout << "|                                                                                                 |" << endl;
        cout << "|";cout << LIGHT_BLUE;
        cout << "                                     >>>  Pizza Info  <<<                                        ";cout << RESET;cout << "|" << endl;
        cout << "|                                                                                                 |" << endl;
        cout << "+=================================================================================================+" << endl;
        cout << "Size: " << size << endl;
        cout << "Sauce: " << sauce << endl;
        cout << "Toppings: ";
        
        if (Toppings.empty()) {
            cout << "No toppings" << endl;
        } else {
            for (int i = 0; i < Toppings.size(); i++) {
                cout << Toppings[i];
                if (i < Toppings.size() - 1) {
                    cout << ", ";
                }
            }
            cout << endl;
        }
}

void showImage(){
      // Load image from file
    cv::Mat image = cv::imread("pizza.jpeg");

    if (image.empty()) {
        std::cerr << "Failed to load image.\n";
        return;
    }

    // Show the image in a GUI window
    cv::imshow("My Pizza", image);

    // Wait for a key press
    cv::waitKey(0);

    // Close the window
    cv::destroyAllWindows();
}
void showImage1(){
   
    cv::Mat image = cv::imread("pizza bbq.webp");

    if (image.empty()) {
        std::cerr << "Failed to load image.\n";
        return;
    }

    cv::imshow("My Pizza", image);
    cv::waitKey(0);
    cv::destroyAllWindows();
}
void showImage2(){
    cv::Mat image = cv::imread("pizza white.jpg");

    if (image.empty()) {
        std::cerr << "Failed to load image.\n";
        return;
    }
  
    cv::imshow("My Pizza", image);
    cv::waitKey(0);
    cv::destroyAllWindows();
}