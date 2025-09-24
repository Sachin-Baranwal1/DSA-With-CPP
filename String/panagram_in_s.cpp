#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, p;
    cout  << "Enter both string :: ";
    cin >> s >> p;
    vector<int> sv(26, 0);
    vector<int> pv(26, 0);

    int n = s.size();
    int m = p.size();
    if (m > n)
        cout << "No answer exist." << endl;
    else
    {
        vector <int> ans;
        for (int i = 0; i < m; i++)
        {
            pv[p[i] - 'a']++;
        }
        int i = 0;
        for (; i < m; i++)
        {
            sv[s[i] - 'a']++;
        }
        bool fi = true;
        for (int j = 0; j < 26; j++)
        {
            if (sv[j] != pv[j])
            {
                fi = false;
                break;
            }
        }
        if (fi)
            ans.push_back(0);
        while (i < n)
        {
            sv[s[i - m] - 'a']--;
            sv[s[i] - 'a']++;
            bool fi = true;
            for (int j = 0; j < 26; j++)
            {
                if (sv[j] != pv[j])
                {
                    fi = false;
                    break;
                }
            }
            if (fi)
                ans.push_back(i - m + 1);
            i++;
        }
        cout << "The indices from where p,s anagram begin are :: " << endl;
        for (auto x : ans)
            cout << x << " ";
    }
}