#include <bits/stdc++.h>
using namespace std;
#define int long long
bool check(int u, int v, vector<string> &s)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (s[u][i] == s[v][j])
            {
                return true;
            }
        }
    }
    return false;
}

int cal(int u, int v, map<string, vector<int>> &mp, string s)
{
    int ind = lower_bound(mp[s].begin(), mp[s].end(), v) - mp[s].begin();
    int n = mp[s].size();
    int ans = INT_MAX;
    for (int i = max(ind - 1, (int)0); i < min(ind + 1, n); i++)
    {
        int ptr = mp[s][i];
        if (v <= ptr && ptr <= u)
        {
            ans = min(ans, u - v);
        }
        else
        {
            ans = min(ans, abs(v - ptr) + abs(u - ptr));
        }
    }
    return ans;
}

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<string> str;
    map<string, vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        str.push_back(s);
        mp[s].push_back(i);
    }

    while (q--)
    {
        int u, v;
        cin >> u >> v;
        u--, v--;
        if (u < v)
            swap(u, v);
        if (check(u, v, str))
        {
            cout << u - v << "\n";
            continue;
        }

        int ans = INT_MAX;

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                string s;
                s.push_back(str[u][i]);
                s.push_back(str[v][j]);
                sort(s.begin(), s.end());
                ans = min(ans, cal(u, v, mp, s));
            }
        }

        if (ans == INT_MAX)
        {
            cout << -1 << "\n";
            continue;
        }
        cout << ans << "\n";
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
