#include <iostream>
#include <vector>
using namespace std;
int main(){
  int n,flag=0,word;
 cout << "Enter the array size is :: ";
 cin>> n;
vector <int> v(n);
cout << "Enter the vector element is :: ";
for(int i=0;i<n;i++){
    cin >> v[i];
}
int i=0,j=n-1;
while(i<=j){   // for(int i=0;i<n;i++)
    if(v[i]!=v[j]){    //a[i] != a[n-i-1]
     flag=1;
     break;
    }
    i++;
    j--;
}
 if(flag==0)
 cout << "Pallindrome" << endl;
 else cout << "Not pallindrome" << endl;
}