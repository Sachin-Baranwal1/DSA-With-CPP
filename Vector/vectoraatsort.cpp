#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(8);
    v.push_back(2);
    v.push_back(13);
    v.push_back(7);
    v.at(2)=90;
    for (int i = 0; i < v.size(); i++)
    cout << v.at(i) << " ";
    cout<<endl;
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
        cout << v.at(i) << " ";
}



