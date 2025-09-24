#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter the size::";
  cin >> n;
  int arr[n];
  int i,max,count=0;
  cout << "Enter the value::";
  cin >> max;
  cout << "Enetr the element :: ";
  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (i = 0; i < n; i++)
  {
    if (arr[i] >=max)
       count++;
  }
   cout << "Total number of elem greater than x is:::"<<count <<endl ;
  return 0;
}