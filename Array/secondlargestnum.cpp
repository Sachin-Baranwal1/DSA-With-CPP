#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter the size::";
  cin >> n;
  int arr[n];
  int i, max=INT32_MIN;
  cout << "Enetr the element :: ";
  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (i = 0; i < n; i++)
  {
    if (arr[i] > max)
      max = arr[i];
  }
   cout << "maximum number is:::"<<max <<endl ;
  int min=INT32_MIN;
  for (i = 0; i < n; i++)
  {
    if (arr[i] >min && arr[i]!=max)
      min=arr[i];
  }
   cout << "second max number is:: "<<  min<<endl;
  return 0;
}