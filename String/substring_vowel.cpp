#include <iostream>
using namespace std;
int main(){
  string s ="aedbtioekuuee";
  // cout << "Enter a string of your choice :: ";
  // getline(cin,s);
  int n= s.size(),x=0,count=0;
   for (int  i = 0; i < n;i++)
   {
      if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
      {
         count++;
      }
      else {
        x+= count * (count+1) /2;
        count=0;
      }
   }
   x+= count * (count+1) /2;
   cout << x  << "";
return 0;
}   //aedbtiokuuee

//#include <iostream>
// using namespace std;
// int substring(string t,int i){
//   int indx = 0;
//   for (int j = i; j < t.size(); j++)
//   {
//     if(t[j]=='a' || t[j]=='e' || t[j]=='i' || t[j]=='o' || t[j]=='u')
//     {
//      indx++;
//     }
//     else  break;
//   }
//   return indx;
// }
// int main(){
//   string s;
//   cout << "Enter a string of your choice :: ";
//   getline(cin,s);
//   int n= s.size(),x=0;
//    for (int  i = 0; i < n;)
//    {
//       if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
//       {
//         int count = substring(s,i);
//         if(count > 1 ) x++;
//         i+=count;
//       }
//       else  i++;
//    }
//    cout << x << "";
// return 0;
// }   //aedbtiokuuee