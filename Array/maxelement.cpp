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
  cout << max;
  return 0;
}