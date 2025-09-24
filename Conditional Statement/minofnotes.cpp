#include <iostream>
using namespace std;
int main (){
    int n,total,A,a500,a200,a100,a50,a20,a10,a5,a2,a1;
    a500=a200=a100=a50=a20=a10=a5=a2=a1=0;
    cout << "Enter the total  Amount";
    cin >> A;
// cout << "Enter the 0 for money <50 \n 1. For < 100\n 2 For < 200 3. For < 500\n 4. For < 2000";
// cin >> n;
switch(A >= 500)
{
    case 1:
    a500+=A/500;
    A=A-a500*500;
    break;
}
switch(A >= 200)
{
    case 1:
    a200+=A/200;
    A=A-a200*200;
break;
}
switch(A >= 100)
{
    case 1:
    a100+=A/100;
    A=A-a100*100;
break;
}
switch(A >= 50)
{
    case 1:
    a50+=A/50;
    A=A-a50*50;
break;
}
switch(A >= 20)
{
    case 1:
    a20+=A/20;
    A=A-a20*20;
break;
}
switch(A >= 10)
{
    case 1:
    a10+=A/10;
    A=A-a10*10;
break;
}
switch(A >= 5)
{
    case 1:
    a5+=A/5;
    A=A-a5*5; 
break;
}
switch(A >= 2)
{
    case 1:
    a2+=A/2;
    A=A-a2*2;
break;
}
switch(A >= 1)
{
    case 1:
    a1+=A/1;
    A=A-a1*1;
break;
}
total=a500+a200+a100+a50+a20+a10+a5+a2+a1;
cout << "Notes Of 500 are :"<< a500 <<  endl;
cout << "Notes Of 200 are :"<< a200 <<  endl;
cout << "Notes Of 100 are :"<< a100 <<  endl;
cout << "Notes Of 50 are :"<< a50 <<  endl;
cout << "Notes Of 20 are :"<< a20 <<  endl;
cout << "Notes Of 10 are :"<< a10 <<  endl;
cout << "Notes Of 5 are :"<< a5 <<  endl;
cout << "Notes Of 2 are :"<< a2 <<  endl;
cout << "Notes Of 1 are :"<< a1 <<  endl;
cout << "The Total Notes are:"<< total <<  endl;

}