#include <iostream>
using namespace std;

int main() {
    int arr[6]={12,11,3,9,18,2};
    int max = arr[0], n=6;
  
    for(int i = 0; i < n; i++){
        for(int j=1; j<n ; j++) {
            if(max<arr[j])
            max=arr[j];
        }
    }
    cout<<"Largest Element : "<<max;
}