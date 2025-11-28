#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, x = -1; cin >> n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            x = i;
            // cerr << x << endl;
            break;
        }
    }
    if (x == -1) cout << 1 << ' ' << n - 1 << endl;
    else cout << n / x << ' ' << (x - 1) * n / x << endl;
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
