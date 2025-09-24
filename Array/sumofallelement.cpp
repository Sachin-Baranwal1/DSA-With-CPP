#include <iostream>
using namespace std;
int main(){
 int n;
 cout << "Enter size of arr:: ";
 cin >> n;
 int arr[n],sum=0;
 for(int k=0;k<n;k++){
    cin >> arr[k];
    sum+=arr[k];
 }
 cout << "The sum of array is :: "<< sum << endl;
return 0;
}