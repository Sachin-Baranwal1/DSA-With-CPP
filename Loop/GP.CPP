/*#include <iostream>
using namespace std;
int main ()
{
    int n,a=1,b;
    cin >> n;
    for (int i=1;i<n;i++)
       {  cout << a << " "  ;
        a=a*2;
     }
}*/

// Using gp Formula 

#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    int n,a1=1,a2=2,r,b;
    r=a2/a1;
    cin >> n;
    for ( int i=1;i<=n;i++)
    {
         b=a1*pow(r,i-1);
         cout << b << " ";
    }
     
}
