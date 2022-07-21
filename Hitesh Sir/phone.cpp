#include <iostream>
#include <string>
using namespace std;

class Phone {
    string _name;
    string _os;
    int _price;

// default constructor
    Phone() {
        cout << "Default Constructor !" << endl;
    }  
    public: 

// parameterized constructor
    Phone(const string &name, const string &os, const int &price) 
    : _name(name), _os(os), _price(price) {
        cout << "Parameterized Constructor !" << endl;

    } 

    //copy constructor
    Phone(const Phone &values) {
        _name = "You can set the value ";
    } 
    
    ~Phone() {
        cout << _name << " deleted" << endl;
    }
    string getName() {
         return _name;
    }
};



int main() {
    Phone iPhone13("iPhone 13 Pro Max", "ios", 172000);
    // samsung.setName("Samsung A1");
    cout << iPhone13.getName() <<endl ;

    Phone iPhone12 = iPhone13;
    cout << iPhone12.getName() <<endl ;
    return 0;
}
