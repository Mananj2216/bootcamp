#include <iostream>
using namespace std;

class One {
    public :
    virtual void intro() { cout << "I'm One ! " << endl; }
};

class Two : public One {
    public :
    void intro() { cout << "I'm Two ! " << endl; }
};

class Three : public One {
    public :
    void intro() { cout << "I'm Three ! " << endl; }
};


int main() {
    One *optr;

    Two b;

    optr = &b;

    optr -> intro(); 

    return 0;
}