#include <iostream>
#include <fstream>
#include "loadingBar.h"
#include "pizza.h"
#define LIGHT_PEACH "\033[38;5;223m"
#define RESET "\033[0m"

using namespace std;

int main() {
system("clear");

        ofstream outputFile;
        outputFile.open("data.txt", ios::app);
        if(!outputFile){
            cerr << "Failed to open data.txt ";
            return 1;
        }


   cout << "+=================================================================================================+" << endl;
    cout << "|                                                                                                 |" << endl;
    cout << "|"; cout << LIGHT_PEACH; 
    cout << "                                   >>> Pizza Game <<<                                            ";cout << RESET;
    cout << "|" << endl;
    cout << "|                                                                                                 |" << endl;
    cout << "+=================================================================================================+" << endl;

    
    // Create a pizza object
    Pizza myPizza;
    
    // Get pizza size from user
    int choice1;
    string size;
    cout << "\nChoose pizza size (1. Small, 2. Medium, 3. Large): ";
    cout << "\nEnter from 1-3: ";
    cin >> choice1;

    switch(choice1){
        case 1: 
        size = "Small";
        break;
        case 2: 
        size = "Medium";
        break;
        case 3: 
        size = "Large";
        break;
        default:
        cout << "Wrong choice!! Set to medium size!!" << endl;
        size = " Medium";
    }

    myPizza.setSize(size);
    
    // Get sauce type from user
    int choice2;
    string sauce;
    cout << "Choose sauce (1. Tomato, 2. BBQ, 3. White): ";
    cout << "\nEnter from 1-3: ";
    cin>> choice2;

    switch(choice2){
        case 1: 
        sauce = "Tomato";
        break;
        case 2: 
        sauce = "BBQ";
        break;
        case 3: 
        sauce = "White";
        break;
        default:
        cout << "Wrong choice!! Set to Tomato!!" << endl;
        sauce = " Tomato";
    }
    
    myPizza.setSauce(sauce);
    
    // Add toppings
    cout << "\nLet's add some toppings!" << endl;
    cout << "Available toppings: 1. Cheese, 2. Pepperoni, 3. Mushroom, 4. Sausage, 5. Pepper" << endl;
    
    string topping;
    int choice3;
    char choice;
    
    do {
        cout << "\nEnter a topping from 1-5: ";
        cin>>choice3;
        switch(choice3){
        case 1: 
        topping = "Cheese";
        break;
        case 2: 
        topping = "Pepperoni";
        break;
        case 3: 
        topping = "Mushroom";
        break;
        case 4: 
        topping = "Sausage";
        break;
        case 5: 
        topping = "Pepper";
        break;
        default:
        cout << "Wrong choice!! Set to Cheese!!" << endl;
        topping = " Cheese";
    }
        myPizza.addToppings(topping);
        
        cout << "Do you want to add more toppings? (y/n): ";
        cin >> choice;
        
    } while (choice == 'y' || choice == 'Y');
    
    // Show the final pizza
        cout << endl;
        cout << " ";cout << LIGHT_PEACH;
        cout << "                            >>>  Your Pizza is nearly Ready  <<<                                 ";cout << RESET;cout << " " << endl;
        cout << endl;
        myPizza.getPizzaInfo(cout);
        myPizza.getPizzaInfo(outputFile);
        

    
    // Show individual details
        cout << "+=================================================================================================+" << endl;
        cout << "|                                                                                                 |" << endl;
        cout << "|";cout << LIGHT_PEACH;
        cout << "                                     >>>  Detail  <<<                                            ";cout << RESET;cout << "|" << endl;
        cout << "|                                                                                                 |" << endl;
        cout << "+=================================================================================================+" << endl;
    cout << "Your pizza size: " << myPizza.getSize() << endl;
    cout << "Your sauce: " << myPizza.getSauce() << endl;
    
    vector<string> allToppings = myPizza.getToppings();
    cout << "Number of toppings: " << allToppings.size() << endl;
        cout << "===================================================================================================" << endl;
    cout << " Please wait: " << endl;
    getLoadingBar();
    if(sauce == "Tomato"){
        showImage();
    }else if(sauce == "BBQ"){
        showImage1();
    }else if(sauce == "White"){
        showImage2();
    }
    
    outputFile.close();
    return 0;
}