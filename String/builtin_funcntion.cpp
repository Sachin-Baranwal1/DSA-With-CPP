#include <iostream>
#include <algorithm>
using namespace std;
int main(){
//   string s="I am a  sachin baranwal";
//   cout << s.size()<< " " << s.length(); //For size of string
      
    //   string s = "ABCD";
    //   s.push_back('e');
    //   s.push_back('f');   //For inserting a char in last 
    //   s.push_back('g'); 
    //   cout << s;

    //  string s="Sachin";
    //  cout <<s<< endl;
    //  s.pop_back();
    //  s.pop_back();   //For delete a char in last
    //   cout << s;

        //  string s1="Sac";
        //   cout <<s1<< endl;
        //   string s2="hin";
        //   cout <<s2<< endl;
        // //   string s=s1 + s2;    //'+' Operator is used to add string
        // //   string s=s1 + "hin baranawal"; 
        //      string s="hin baranawal" +s1 ; 
        //   cout <<s<< endl;
       

            string s1="Sachin";
            cout <<s1<< endl;
            reverse(s1.begin()+3,s1.end()); //Reverse the partial string
            cout <<s1<< endl;
            string s2="Sachin";
            reverse(s2.begin(),s2.end()-1);//It is used to reverse the string
            cout <<s2<< endl;
            string s3="Sachin";
            reverse(s3.begin()+2,s3.begin()+6);
            cout <<s3<< endl;
return 0;
}