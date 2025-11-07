#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(101));
    vector<int> ans(n);
    int x, mx = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ans[i];
        for (int j = 0; j < ans[i]; j++)
        {
            cin >> x;
            v[i][x]++;
        }
        sort(v[i].begin(), v[i].end());
        reverse(v[i].begin(), v[i].end());
        int k = v[i][5];
        ans[i] += (v[i][5] * 4);
        ans[i] += ((v[i][4] - k) * 2);
        k += (v[i][4] - k);
        ans[i] += ((v[i][3] - k) * 1);

        mx = max(mx, ans[i]);
    }
    int pos;
    for (int i = 0; i < n; i++)
    {
        if (mx == ans[i])
        {
            cnt++;
            pos = i + 1;
        }
    }
    if (cnt >= 2)
    {
        cout << "tie" << "\n";
    }
    else if (mx == ans[0])
    {
        cout << "chef" << "\n";
    }
    else
    {
        cout << pos << "\n";
    }
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
