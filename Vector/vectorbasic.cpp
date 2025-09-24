#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    cout << v.capacity() << endl;
    v.push_back(6);
    cout << v.capacity() << endl;
    v.push_back(5);
    cout << v.capacity() << endl;
    v.push_back(5);
    cout << v.capacity() << endl;
    v.push_back(9);
    cout << v.capacity() << endl;
    v.insert(v.begin() + 2, 8);
    for(int i=0;i<v.size();i++)
    cout << v[i];
    // int n = sizeof(v) / sizeof(v[0]);
    // cout << n << endl;
    // cout << v[0] << " ";
    // cout << v.capacity() << endl;
    // cout << v[1] << " ";
    // cout << v.capacity() << endl;
    // cout << v[2] << " ";
    // cout << v.capacity() << endl;
    // cout << v[3] << " ";
    // cout << v.capacity() << endl;
}
