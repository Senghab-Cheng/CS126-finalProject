#include<pizza.h>

void Pizza::addToppings(const string& topping){            /* push_back(topping) adds the given string to the end of the list. */
    Toppings.push_back(topping);                           /* Ex: if u add A, it will be added to toppings. Then if u add B after 
                                                                    that, B will be added after A  */
};                                                          
vector<string> Pizza::getToppings(){
    return Toppings;
};