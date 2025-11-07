#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int mn = INT_MAX;
    for (int i = 0; i < n - 1; i++)
    {
        vector<int> ans;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                ans.push_back((s[j] - '0') * 10 + (s[j + 1] - '0'));
                j++;
            }
            else
            {
                ans.push_back(s[j] - '0');
            }
        }

        for (int j = 1; j < ans.size(); j++)
        {
            ans[j] = min(ans[j - 1] * ans[j], ans[j - 1] + ans[j]);
        }

        int z = ans.size();
        mn = min(mn, ans[z - 1]);
    }
    cout << mn << "\n";
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
