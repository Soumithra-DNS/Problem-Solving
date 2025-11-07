#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    multiset<int> ms;
    int ans = n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        int y = x ^ ((1LL << 31) - 1);

        auto it = ms.find(y);
        if (it != ms.end())
        {
            ms.erase(it);
            ans--;
        }
        else
        {
            ms.insert(x);
        }
    }

    cout << ans << "\n";
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
