#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s, t;
    cout << "Enter the both string for check:: ";
    cin >> s >> t;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    int n = s.length();
    int m = t.length();
    if (s==t)
        cout << "YES";
    else
    cout << "NO";
    return 0;
}

// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     string s, t;
//     cout << "Enter the both string for check:: ";
//     cin >> s >> t;
//     sort(s.begin(), s.end());
//     sort(t.begin(), t.end());
//     int n = s.length();
//     int m = t.length();
//     bool yes =false;
//     if (m != n)
//         cout << "Not a anagram string";
//     else
//     {
//         for (int i = 0; i < n; i++)
//         {
//             if (s[i] == t[i])yes = true;
//             else
//             {
//                 yes = false;
//                 break;
//             }
//         }
//         if(yes)
//     cout << "Both string is Anagram";
//     else cout << "Both string is not a Anagram";
//     }
    
//     return 0;
// }