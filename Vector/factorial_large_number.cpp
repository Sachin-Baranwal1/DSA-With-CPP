#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    cout << "Enter the number for factorial: ";
  int n;
  vector<int> res;
  cin >> n;
  res.push_back(1);
  for (int i = 2; i <= n; i++)
  {       int carry=0;
    for (int j = 0; j < res.size(); j++)
    {
       int value = res[j] * i + carry;
       res[j]=value % 10;
       carry= value / 10;
    }
    while(carry!=0){
      res.push_back(carry %10);
      carry/=10;
    }
  }
  reverse(res.begin(),res.end());
  for(int k=0;k<res.size();k++)
  cout << res[k];
  return 0;
}