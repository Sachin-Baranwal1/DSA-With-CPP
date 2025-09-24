#include <iostream>
using namespace std;
int main(){
    int n;
        cout << "Enter the size of array :: ";
    cin >> n;
    int arr[n];
    int num=0;
    int res=1;
    cout << "Enter the elements of array :: ";
 for(int i=0;i<n;i++){
    cin >> arr[i];
 }
  for(int j=0;j<n;j++){
    for(int i=j+1;i<n;i++){
   if(arr[j]==arr[i])
   {
    res=0;
    num=arr[j];
    break;
   }
 }
  }
  if(res==0)
  cout << "Duplicate Of " << num << " Is present!" ;
  else 
  cout << "Duplicate Is not present!" ;
 }