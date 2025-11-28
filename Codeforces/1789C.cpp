#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m; cin >> n >> m;
    vector<int>arr(n + 1), sub(n + m + 5);
    int ans = n * m * (m + 1);
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        sub[arr[i]] = m + 1;
    }
    for(int i = 1; i <= m; i++){
        int p, v; cin >> p >> v;
        sub[arr[p]] -= (m - i + 1);
        sub[v] += (m - i + 1);
        arr[p] = v;
    }
    for(int i = 1; i <= n + m + 1; i++){
        ans -= ((sub[i] * (sub[i] - 1)) / 2);
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
