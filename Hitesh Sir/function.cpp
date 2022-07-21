#include <iostream>
using namespace std;

void fun() {
    cout<<"Function is working !\n ";
}

int getNum(int n) {
    return n+n;
}

int main() {
    cout<<"Hello World !\n";
    fun();
    cout<<getNum(8);
}