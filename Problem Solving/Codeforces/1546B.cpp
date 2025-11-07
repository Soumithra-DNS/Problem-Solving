#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> cnt(m + 1, vector<int>(30, 0));
    for (int i = 0; i < 2 * n - 1; i++)
    {
        string str;
        cin >> str;
        for (int j = 0; j < m; j++)
        {
            cnt[j][str[j] - 'a']++;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (cnt[i][j] % 2 == 1)
            {
                cout << (char)('a' + j);
                break;
            }
        }
    }
    cout << "\n";
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
