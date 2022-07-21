#include <iostream>
#include <string>
using namespace std;
int main() {
    int a=6,b=12;
    // cin >> a >> b;
    string str[9] = {"one", "two","three","four","five","six","seven","eight","nine"};
    for(a;a<=b;a++) {
        if(a<=9) cout<<str[a-1]<<endl;
        else if (a%2==0) cout<<"even\n";
        else cout<<"odd\n";
    }
    return 0;   
}