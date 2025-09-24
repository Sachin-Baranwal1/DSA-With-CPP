#include <iostream>
using namespace std;
int noofdigit(int num){
    int nod=0;
    while(num!=0){
        num=num/10;
        nod++;
    }
    return nod;
}
int main(){
 int number;
 cout << "Enter the number  ::";
 cin >> number;
 int hello = noofdigit(number);
 cout << hello<<endl;
 cout << hello*hello << endl;
return 0;
}