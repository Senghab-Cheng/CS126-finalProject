#include<string>
#include<vector>
using namespace std;
class Pizza{
    private:
    string size;
    vector<string> Toppings;                    // An array of strings( string[] )
    string sauce;

    public:
    void setSize(string NewSize);
    string getSize();
    void addToppings(const string& topping);    // Storing 1 string at a time, 1 after another to a vector
    vector<string> getToppings();               // A way to return all the toppings
    void setSauce(string NewSauce);
    string getSauce();
    void getPizzaInfo();                        // Prints all info of the pizza out
};