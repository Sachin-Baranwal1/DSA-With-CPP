#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(-3);
    v.push_back(0);
    v.push_back(8);
    v.push_back(-7);
    v.push_back(17);
    v.push_back(-5);
    v.push_back(-21);
    cout <<"Before sorting the array is:: "<< endl ;
     for (int i = 0; i < v.size(); i++)
            cout<< v[i] << " ";
            cout <<endl;
    int j=v.size()-1,i=0;
    while(i<j){
        if(v[j]>=0)
        j--;
        else 
        {
            if(v[i]<0){
              i++;
            }
            else {
                int temp=v[i];
                v[i]=v[j];
                v[j]=temp;
            }
        }
    }
    for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";
} 