#include <iostream>
using namespace std;
// int prod(int *ptr1, int *ptr2)
// {
//     int hi = *ptr1 * *ptr2;
//     return hi;
// }
// int main()
// {
//     int x, y;
//     cout << "Enter the value of Num:: ";
//     cin >> x >> y;
//     int result = prod(&x, &y);
//     cout << result;
//     return 0;
// }

//                      O000000000ORRRRRRRRRRRRRRRR

int main()
{
    int x, y;
    cout << "Enter the value of Num:: ";
    cin >> x >> y;
    int *p1;
    int *p2;
    p1 = &x;
    p2 = &y;
    cout << *p1 * *p2;
}