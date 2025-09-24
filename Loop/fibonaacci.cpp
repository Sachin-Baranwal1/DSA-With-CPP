 #include <iostream>
using namespace std;
int main(){
    int n,i,sum=0,a=0,b=1,c;
    cout << "Enter a number :";
    cin >> n;
    cout << a  << " "  << b <<" " ;
    for (i=1;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
       cout << c << " ";}}
