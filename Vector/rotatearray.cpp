// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(6);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(7);
//     v.push_back(4);
//     v.push_back(8);
//     int k = 1;
//     while (k <= 9)
//     {
//         int temp = v[v.size() - 1];
//         for (int i = v.size() - 1; i > 0; i--)
//         {
//             v[i] = v[i - 1];
//         }
//         v[0] = temp;
//         k++;
//     }
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
// }

//Another method isa:: 

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(4);
    v.push_back(8);
    int k;
    cout << "Enter the no of time to switch:: " ;
    cin >> k;
     rotate(v,k);
     for(int i=0;i<v.size();i++)
     cout << v[i];
    }
void reverse(int i, int j, vector<int>& r) {
        int temp;
        while (i <= j) {
            temp = r[i];
            r[i] = r[j];
            r[j] = temp;
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n > k) {
            reverse(0, n - k - 1, nums);
            reverse(n - k, n - 1, nums);
            reverse(0, n - 1, nums);
        }
        else
        {
            k = k % n;
            reverse(0, n - k - 1, nums);
            reverse(n - k, n - 1, nums);
            reverse(0, n - 1, nums);
        }
    }