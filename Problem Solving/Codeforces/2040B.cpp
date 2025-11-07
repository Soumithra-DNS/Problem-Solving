#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n; cin >> n;
    if(n <= 2){
        cout << n << "\n";
        return;
    }
    if(n == 3){
        cout << 2 << "\n";
        return;
    }
    int ans = 2;
    int cnt = 4;
    while(cnt < n){
        cnt = (cnt + 1) * 2;
        ans++;
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
