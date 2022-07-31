#include <iostream>
using namespace std;

int add1 (int p, int q) {
    return p+q;
}

int add2(int *x, int *y) {
    *x = *x + *y;
    return *x+*y;
}

int main() {
    int a = 5, b = 6;
    cout << add1(a, b) << endl;
    cout << add2(&a, &b);
    return 0;
}