#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int cnt_s = 0, cnt_p = 0;
    int i = 1;
    while (i < n - 1)
    {
        s[i] == 's' ? cnt_s++ : (s[i] == 'p' ? cnt_p++ : 0);
        i++;
    }

    bool okP = false, okSP = false;
    for (char ch : s)
    {
        if (ch == 'p' && !okP)
            okP = true;
        if (okP && ch == 's')
        {
            okSP = true;
            break;
        }
    }

    cout << (okSP || (cnt_s > 0 && cnt_p > 0) ? "NO" : "YES") << '\n';
}

int32_t main()
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
