#include <iostream>
using namespace std;

void printnum(int num) {
    if(num >= 1) {
        cout<<(2*num)<<" "; 
        printnum(num-1);
    }
}

int main() {
    printnum(10);
    return 0;
}