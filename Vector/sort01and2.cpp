#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    int low = 0, high = v.size()-1;
    int mid = (low + high) / 2;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
        {
            v[low] = 0;
            low++;
        }
        else if(v[i] == 2)
        {
            v[high] = 2;
            high--;
        }
        else
        {
            v[mid]=1;
            mid--;
        }
    }
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}