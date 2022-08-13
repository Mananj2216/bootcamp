#include <iostream>
using namespace std;
int main() {
    long int num = 153, temp = num;
    int count = 0, sum=1, total;

    while(temp != 0) {
        temp = temp/10;
        count++;
    }
    temp = num;
    for(int i=0; i<count; i++) {
       int t = temp % 10;
        sum=sum* t; 
        total = sum;
        temp = temp / 10;
        }
        cout << total;
    return 0;
}