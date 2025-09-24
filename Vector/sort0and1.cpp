// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     for(int i=0;i<v.size();i++){
//      cout  << v[i]<< " ";
//     }
//     cout << endl;
//     sort(v.begin(),v.end());
//     for(int i=0;i<v.size();i++){
//      cout  << v[i] << " ";
//     }
// }

// without use of sort algorithm
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     for (int i = 0; i < v.size() - 1; i++)
//         cout << v[i] << " ";
//     cout << endl;
//     int temp;
//     for (int i = 0; i < v.size() - 2; i++)
//     {  for(int j=i+1;j< v.size()-1;j++){
//  if (v[i] > v[j])
//         {
//             temp = v[i];
//             v[i] = v[j];
//             v[j] = temp;
//         }
//     }
//     }

//     for (int i = 0; i < v.size() - 1; i++)
//         cout << v[i] << " ";
// }

// Another approach in a single loop :::

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    cout <<"Before sorting the array is:: "<< endl ;
     for (int i = 0; i < v.size(); i++)
            cout<< v[i] << " ";
            cout <<endl;
    int j=v.size()-1,i=0;
    while(i<j){
        if(v[j]==1)
        j--;
        else 
        {
            if(v[i]==0){
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

// Another approach is ::: 
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     for (int i = 0; i < v.size() - 1; i++)
//         cout << v[i] << " ";
//     cout << endl;
//     int temp=0;
//     for (int i = 0; i < v.size() - 1; i++)
//     {
//         if (v[i] == 0)
//             temp++;
//     }
//     for (int i = 0; i < v.size() - 1; i++)
//     {
//         if (i < temp)
//             v[i] = 0;
//         else
//             v[i] = 1;
//     }
//     for (int i = 0; i < v.size() - 1; i++)
//             cout << v[i] << " ";
// }