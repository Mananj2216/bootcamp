#include <iostream>
using namespace std;
int main() {
    int N,i=0;
    cin>>N;
    int *A = new int[N];
    while(i != N)(cin>>A[i++]);
    while(cout<<A[--N]<<' ' && N);
    delete[] A;
    return 0;
}