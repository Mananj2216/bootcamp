#include <iostream>
using namespace std;

void printVar(int a) {
    cout << a << endl;
}

void printVar(double a) {
    cout << a << endl;
}

int main() {
    printVar(6.54);
    printVar(3);
}