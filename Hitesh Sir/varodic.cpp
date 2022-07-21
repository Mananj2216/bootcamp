#include <iostream>
#include <string>
using namespace std;

void fun1() {
    cout << "I'm Empty Functionn !! " << endl;
}

template <typename T, typename... Types>
void fun1(T var1, Types... var2) {
    cout << var1 << endl;
    fun1(var2...);
}

int main() {
    string myName = "Himanshu";
    fun1(5,56,myName,"pass me anything i will print");
    fun1();
    return 0;
}