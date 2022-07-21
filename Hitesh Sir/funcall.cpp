#include <iostream>
using namespace std;

int fun1(int store) {
    return store*store;
}

int fun2(int &mynum) {
    return mynum*mynum*mynum;
}

int fun3(int *ptr) {
    return &ptr * &ptr * &ptr * &ptr;
}

int main() {
    int num=5;
    cout<<fun1(num)<<endl;
    cout<<fun2(num)<<endl;
    cout<<fun3(num)<<endl;
    return 0;
}