#include<iostream>
using namespace std;

void check(int *life) {
    cout<<++(*life);
}

int main() {
    int life = 2;
    cout << &life << endl;
    check(&life);
    return 0;
}