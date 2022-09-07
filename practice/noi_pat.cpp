#include<iostream>
using namespace std;
int main() {
        int i, j, k=1, n = 4, m = 0;
        for(i=1; i<=7; i++) {
                k=n;
                i<=n?m++:m--;
         for(j=1; j<=7; j++) {
                 if(j>=5-m && j<=3+m)
                  cout << k;
                 else cout << " ";
                 j<4?k=n-j:k=j-2;
         }
        cout << endl;
        }

return 0;
}