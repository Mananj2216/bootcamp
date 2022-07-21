#include <iostream>
#include <string>
using namespace std;

class User {
    int secret = 9;

    public :
    string name = "default !";
    void greet() {
    cout << "Good Morning , " << name << endl;
    }

    // getters and setters

    void setSecret(const int & newsecret) {
        secret = newsecret;
    }

    int getSecret() ;
   
};

int User::getSecret() {
        return secret;
    }

int main() {
    User himanshu;
    himanshu.name = "Himanshu";
    himanshu.greet();

himanshu.setSecret(27);

cout << himanshu.getSecret() << endl;

    // User ram;
    // ram.name = "Ram";
    // ram.greet();
}