#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n; cin >> n;
    vector<int>arr(100, 0);
    int ans = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        arr[x]++;
    }
    for(int i = 0; i < 100; i++){
        ans += arr[i] / 2;
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
