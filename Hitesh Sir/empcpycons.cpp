#include <iostream>
#include <string>
using namespace std;

class Emp {
int _id;
string _ename;
string _ejob;
public:
Emp();
Emp( int  id, string  ename, string  ejob);
string geteName();
};

Emp :: Emp() {
    cout << "default constructor is working ! \n";
}
 
Emp :: Emp( int id, string  ename, string ejob) : _id(id), _ename(ename), _ejob(ejob) {
 cout << "Yes, parameterized constructor is working . \n";
}

string Emp :: geteName() {
    return _ename;
}

int main() {
    Emp eobj1(101,"Vikas", "Manager");
    cout << eobj1.geteName() << endl;
    return 0;
}