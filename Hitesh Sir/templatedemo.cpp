#include <iostream>
using namespace std;

template <typename ANY>
ANY addme(ANY a, ANY b) {
    return a+b;
}

int main() {
    cout << addme(55,45) << endl;
    cout << addme(52.5,44.55) << endl;
}