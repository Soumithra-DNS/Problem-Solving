#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    if (n % 2 == 0)
    {
        map<char, int> mp1, mp2;
        int mx1 = 0, mx2 = 0;
        for (int i = 0; i < n; i += 2)
        {
            mp1[str[i]]++;
            mx1 = max(mx1, mp1[str[i]]);
        }
        for (int i = 1; i < n; i += 2)
        {
            mp2[str[i]]++;
            mx2 = max(mx2, mp2[str[i]]);
        }
        cout << (n - mx1 - mx2) << "\n";
    }
    else
    {
        int res = n;
        vector<vector<int>> pref(2, vector<int>(26));
        vector<vector<int>> suf(2, vector<int>(26));
        for (int i = n - 1; i >= 0; i--)
        {
            suf[i % 2][str[i] - 'a']++;
        }
        for (int i = 0; i < n; i++)
        {
            suf[i % 2][str[i] - 'a']--;
            int ans = n;
            for (int k = 0; k < 2; k++)
            {
                int mx = 0;
                for (int j = 0; j < 26; j++)
                {
                    mx = max(mx, suf[1 - k][j] + pref[k][j]);
                }
                ans -= mx;
            }
            res = min(res, ans);
            pref[i % 2][str[i] - 'a']++;
        }
        cout << res << "\n";
    }
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
