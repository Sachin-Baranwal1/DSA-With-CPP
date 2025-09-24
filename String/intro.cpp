#include <iostream>
using namespace std;
int main()
{
    // char str[5] = {'a', 'b', 'c', 'd', 'e'};
    // for (int i = 0; i < 5; i++)    {
    //     cout << str[i]<< " ";
    // }
    // cout <<endl;
    // char st[5] = "afds";
    // for (int i = 0; i < 5; i++)    {
    //     cout << st[i]<< " ";
    // }
    char str[] =  "abcdef";
    for (int i = 0; str[i] != '\0'; i++)    {
        cout << str[i]<< " ";
    }
    cout << str;

    return 0;
}