#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a Number :";
    cin >> n;
   int nsp=1,nst=n-1;
   for (int i = 0; i <=2*n-2; i++)
   {
    cout << "* ";
   }cout << endl;
   
    for (int i=1;i<=nst;i++){
        for(int j=1;j<=n-i;j++){
            cout << "* ";}
            for(int k=1;k<=2*i-1;k++)
               cout << "  ";
        for(int l=1;l<=n-i;l++){
                cout << "* ";
        }

        
        cout << endl;
    }
    for (int i=2;i<=n-1;i++){
        for(int j=1;j<=i;j++){
            cout << "* ";}
            for(int k=1;k<=2*(n-i)-1;k++)
               cout << "  ";
        for(int l=1;l<=i;l++){
        cout << "* ";
        }
         cout << endl;
    } for (int i = 0; i <=2*n-2; i++)
   {
    cout << "* ";
   }cout << endl;
    }
           
            

// #include <iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cout << "Enter a Number :";
//     cin >> n;
//     m=2*n-1;
//     for (int i=0;i<2*n-1;i++){
//         for(int j=0;j<2*n-1;j++){
//             if(i+j==m/2 || i+j==3*(n-1) || abs(i-j)==m/2 || i==m/2 || j==m/2)
//             cout << "* ";
//             else 
//             cout << "  ";
//         }
//         cout << endl;
//     }
// }