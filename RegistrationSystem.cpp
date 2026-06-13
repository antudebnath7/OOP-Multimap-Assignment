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
            cout << "OK\n";
            mp.insert({s, 1});
        }
        else
        {
            int cnt = it->second;

            cout << s << cnt << '\n';

            mp.erase(it);
            mp.insert({s, cnt + 1});
        }
    }

    return 0;
}