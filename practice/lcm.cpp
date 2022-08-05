#include <iostream>
using namespace std;
int main() {
    int n1 = 15, n2 = 24, maxm;
    maxm = max(n1,n2);
    // cout << max_num;
    while(1) {
        if(maxm % n1 == 0 && maxm % n2 == 0) {
            printf("LCM of %d and %d is : %d ",n1,n2,maxm);
            break;
        }
        maxm++;
    }
    return 0;
}