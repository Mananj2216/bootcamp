#include <iostream>
#include <string>
using namespace std;

class Man {
    string _name;
    int _age;
    // friend class SuperMan;
protected :

    int getAge() {
        return _age;
    }
public :
    Man(const string & name , const int & age) : _name(name), _age(age) {    }

    string getName() {
        return _name;
    }
};

class SuperMan : public Man {
    bool _flight;
    public :
SuperMan(string name) : Man(name, 28) { }

};

int main() {
    Man one("Tony", 32);
    cout << one.getName() << endl;
    // cout << one.getAge() << endl;
    SuperMan two("Jack");
    cout << two.getName() << endl;

}