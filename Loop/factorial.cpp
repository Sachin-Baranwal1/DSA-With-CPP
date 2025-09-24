 #include <iostream>
using namespace std;
int main(){
    int n,i,sum,flag=1;
    cout << "Enter a number :";
    cin >> n;
    for (i=1;i<=n;i++){
        flag*=i;
    cout << "The factorial of "<< i << " is :" << flag << endl;
    }
}