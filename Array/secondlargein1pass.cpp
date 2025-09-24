#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of array :: ";
    cin >> n;
    cout << "Enter the elements of array :: ";
    int arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  int max=arr[0];
 int smax=arr[1];
 for(int i=0;i<n;i++){
    if(arr[i]  > max){
        smax=max;
    max=arr[i];
    }
    if(arr[i]>smax && arr[i] != max)
    smax=arr[i];
 }
 cout << "The second max in array is::: " << smax << endl;

 }