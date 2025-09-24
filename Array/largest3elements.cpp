#include <iostream>
using namespace std;
int main(){
   int max=INT16_MIN,max1=INT16_MIN,max2=INT16_MIN;
    int n;
    cout << "Enter the size of array :: ";
    cin >> n;
    cout << "Enter the elements of array :: ";
    int arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  for(int i=0;i<n;i++){
    if(arr[i]>max){
        max2=max1;
        max1=max;
        max=arr[i];
    }
    else if(max1 < arr[i])
    {
      max2=max1;
     max1=arr[i];
    }
    else if(max2 < arr[i]){
    max2=arr[i];
  }}
  cout <<"3rd max :: " << max2 <<endl << "2nd max :: " << max1 <<endl << "maximum :: " << max;
return 0;
}