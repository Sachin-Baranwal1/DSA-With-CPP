#include <iostream>
using namespace std;
int hello(int  num,int*ptr1,int *ptr2){
    *ptr2=num%10;
     while (num>9){
        num/=10;
 } 
        *ptr1=num;
}
int main(){
 int num,firstdigit,seconddigit;
 cout << "Enter the number ::" << endl;
 cin >> num;
 int *ptr1=&firstdigit;
 int *ptr2=&seconddigit;
  hello(num,ptr1,ptr2);
  cout << *ptr1 << endl<< *ptr2;
}