#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(51);
    v.push_back(19);
    v.push_back(7);
    v.push_back(11);
    v.push_back(31);
    v.push_back(5);
    v.push_back(9);
    for(int i=0;i<v.size();i++){
        cout << v[i]<<" ";
    }
    cout << endl;
    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout << v[i]<<" ";
    }
    cout << endl;
    v.pop_back();
    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout << v[i]<<" ";
    }
}