#include <iostream>
using namespace std;
int main() {
  int arr[10] = {11, 2, 9, 13, 57, 25, 17, 1, 90, 3};
  for(int i=0;i<10;i++){
    int root = i;
    while(root!=0){
      int temp = (root - 1)/2;
      if(arr[temp]<arr[root]){
        int t = arr[temp];
        arr[temp] = arr[root];
        arr[root] = t;
      }
      root = temp;
    }
  }
  for(int i=0;i<10;i++){
    cout<<arr[i]<<" ";
  }
  cout<<"\n";
  for(int i=9;i>=0;i--){
    int temp_1 = arr[0];
    arr[0] = arr[i];
    arr[i] = temp_1;
    int root = 0;
    while(root<=i){
      int child = 2*root + 1;
      if(child<i-1 && arr[child]<arr[child+1]){
        child++;
      }
      if(child<i && arr[child]>arr[root]){
        int temp_2 = arr[root];
        arr[root] = arr[child];
        arr[child] = temp_2;
      }
      root = child;
    }
  }
  for(int i=0;i<10;i++){
    cout<<arr[i]<<" ";
  }
}
