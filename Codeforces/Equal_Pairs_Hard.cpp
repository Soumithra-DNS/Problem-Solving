#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> cnt(n + 1);
    int mx = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int pos, val;
        cin >> pos >> val;
        if (cnt[val] != 0)
        {
            ans -= ((cnt[val] * (cnt[val] - 1)) / 2);
        }
        cnt[val]++;
        ans += ((cnt[val] * (cnt[val] - 1)) / 2);
        if (cnt[val] > mx)
        {
            mx = max(mx, cnt[val]);
            int temp = ans;
            temp -= ((cnt[val] * (cnt[val] - 1)) / 2);
            int x = mx + (n - i - 1);
            temp += ((x * (x - 1)) / 2);
            cout << temp << " ";
        }
        else
        {
            int temp = ans;
            temp -= ((mx * (mx - 1)) / 2);
            int x = mx + (n - i - 1);
            temp += ((x * (x - 1)) / 2);
            cout << temp << " ";
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