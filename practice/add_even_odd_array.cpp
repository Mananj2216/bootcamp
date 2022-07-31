#include <iostream>
using namespace std;
int main() {
    int arr[10];
    int even = 0, odd = 0;
    cout << "Enter 10 Numbers : ";
    for(int i=0; i < 10; i++) {
        cin >> arr[i];
        if(arr[i] % 2 == 0)
            even = even + arr[i];
        else 
            odd = odd + arr[i];
    }
    cout << even << endl;
    cout << odd << endl;
    return 0;
}