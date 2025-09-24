// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the size of array :: ";
//     cin >> n;
//     cout << "Enter the elements of array :: ";
//     int arr[n];
//   for(int i=0;i<n;i++){
//     cin >> arr[i];
//   }
//   int max=arr[0];
//  for(int i=0;i<n;i++){
//     if(arr[i]  < max){
//     max=arr[i];
//     }
//  }
//  cout << "The second max in array is::: " << max << endl;
  
//  }


//   Another method is to find smax

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
 for(int i=0;i<n;i++){
    
    max=min(arr[i],max);
    
 }
 cout << "The second max in array is::: " << max << endl;
  
 }