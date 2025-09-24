#include <iostream>
using namespace std;
int main(){
  int n;
   int flag=0;
    cout << "Enter the size of array :: ";
    cin >> n;
    cout << "Enter the elements of array :: ";
    int arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  for(int i=1;i<n;i++){
    if(arr[i]>arr[i-1] )
     flag+=1;
     else flag+=0;   
  }
  if(flag==n-1)
  cout << "Array is Sorted" << endl;
  else 
  cout << "Array is Unsorted" << endl;
return 0;
}