#include <iostream>
using namespace std;

int main() {
    int arr[6]={12,11,3,9,18,2};
    int count=6,temp=0;
  for (int i = 0; i < count; i++)
  {
      for (int j = 0; j < count; j++)
      {
          if(arr[i]>arr[j]) {
              temp=arr[i];
              arr[i]=arr[j];
              arr[j]=temp;

          }
      }
  }
  for (int i = 0; i < count; i++)
  {
      cout<<arr[i]<<"\t";
  }
  
    
}