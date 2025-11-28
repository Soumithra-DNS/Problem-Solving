#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    string l = "10", r = "18";
    for (int i = n - 2; i >= 0; i--)
    {
        string sub = s.substr(i, 2);
        if (sub[0] == '0')
        {
            cout << "NO" << "\n";
            return;
        }
        if (i != 0)
            sub[0] = '1';
            
        s[i]--;
        if (l > sub || sub > r)
        {
            cout << "NO" << "\n";
            return;
        }
    }

    cout << "YES" << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
