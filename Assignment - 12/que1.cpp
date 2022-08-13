// print first n natural number
#include <iostream>
using namespace std;

int fun(int n) {
    if (n == 1) return 1;
    return (n+fun(n-1));
}

int main() {
    int num, sum;
    cout << "Enter a Number : ";
    cin >> num;
    sum = fun(num);
    cout << "Sum : " << sum;
    return 0;
}

