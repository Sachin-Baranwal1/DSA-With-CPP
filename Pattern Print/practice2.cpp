/// Alphabet Bridge
#include <iostream>
using namespace std;
int main (){
    int n,a=4;
    cout << "Enter the number ";
    cin >> n;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n-i;j++){
     cout << " ";} 
     cout << i ;
      for(int l=i;l>2*i-1;l++){
      cout << " ";}
      for(int k=n-1;k>=1;k--){
        if(i+k==n+1)
        cout << i; else 
      cout << " ";}
     
      cout << endl; }}

      
 
// /// Alphabet Bridge
// #include <iostream>
// using namespace std;
// int main (){
//     int n;
//     cout << "Enter the number ";
//     cin >> n;
//     for(int i=1;i<= n-1;i++){
// cout << "  ";}    
// cout << "* ";    
// cout << endl;    
//     for(int i=2;i<= n-1;i++){
//       for(int j=1;j<=n-i;j++){
//      cout << "  ";} 
//      cout << "* ";
//       for(int j=1;j<=2*(i-1)-1;j++){
//         cout << "  ";}
//       cout << "* ";
     
//       cout << endl; }}
 
// /// Alphabet Bridge
// #include <iostream>
// using namespace std;
// int main (){
//     int n;
//     cout << "Enter the number ";
//     cin >> n;
//     for(int i=1;i<=n;i++){
//       for(int j=1;j<=n-i+1;j++)
//      cout << char(j+64);
    
//       for(int k=1;k<2*i-2;k++){
//      cout << " ";
//      }
//       for(int l=i;l<=n;l++){
//         if(l==1) continue;
//      cout << char(l+67);
//      }
//       cout << endl; }
// }
// /// Number Triangle Flipped 
// #include <iostream>
// using namespace std;
// int main (){
//     int n;
//     cout << "Enter the number ";
//     cin >> n;
//     for(int i=1;i<=n;i++){
//       for(int j=i;j<=n;j++)
//      cout << "  ";
//       for(int k=1;k<=i;k++){
//      cout << k << " ";
//      }
//       cout << endl; }
// }
// /// Hollow Rectangle
// #include <iostream>
// using namespace std;
// int main (){
//     int n;
//     cout << "Enter the number ";
//     cin >> n;
//     for(int i=1;i<=n;i++){
//       for(int j=1;j<=n+2;j++){
//         if(i==n || i==1 || j==1 || j==n+2)
//      cout << "* ";
//      else cout <<"  ";
//      }
//       cout << endl; }
// }
// /// Alphabet Triangle 
// #include <iostream>
// using namespace std;
// int main (){
//     int n;
//     cout << "Enter the number ";
//     cin >> n;
//     for(int i=1;i<=n;i++){
//       for(int j=1;j<=i;j++){
//         if(i%2==0)
//      cout << char(j+64);
//      else 
//      cout << j;
//       }
//       cout << endl; }
// }
// /// Number Triangle Reverse
// #include <iostream>
// using namespace std;
// int main (){
//     int n;
//     cout << "Enter the number ";
//     cin >> n;
//     for(int i=1;i<=n;i++){
//       for(int j=1;j<=n-i+1;j++){
//      cout << j;
//       }
//       cout << endl; }
// }
/// Number Square 
// #include <iostream>
// using namespace std;
// int main (){
//     int n;
//     cout << "Enter the number ";
//     cin >> n;
//     for(int i=1;i<=n;i++){
//       for(int j=1;j<=n;j++){
//      cout << i;
//       }
//       cout << endl; }
// }



// #include <iostream>
// using namespace std;
// int main (){
//     int n;
//     cout << "Enter the number ";
//     cin >> n;
//     for(int i=n;i>=1;i--){
//       for(int j=1;j<=i;j++){
//      cout << char(j+64);
//       }
//       for(int k=1;k<=2*i-1;k++){
//      cout << " ";
//       }
    
//     cout << endl;
// }}