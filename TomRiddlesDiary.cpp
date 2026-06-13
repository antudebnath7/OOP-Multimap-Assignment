#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    multimap<string, int> mp;

    while (n--)
    {
        string s;
        cin >> s;

        auto it = mp.find(s);

        if (it == mp.end())
        {
            cout << "NO\n";
            mp.insert({s, 1});
        }
        else
        {
            cout << "YES\n";
        }
    }

    return 0;
}