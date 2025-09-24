#include <iostream>
using namespace std;
int main(){
 int n,m;
 cout << "Enter the no of row :: ";
 cin >> n;
 cout << "Enter the no of columns :: ";
 cin >> m;
 int arr[3][3];
 cout << "Enter the elements of array :: ";
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin >> arr[i][j];
    }
 }
int value=arr[0][0];
 for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(arr[i][j]>value)
        value = arr[i][j];
    }
 }
 cout << "Maximum Element in array is ::" << value;

return 0;
}