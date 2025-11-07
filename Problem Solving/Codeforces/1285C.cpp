#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, g, a, b; cin >> n;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            g = __gcd(i, n / i);
            if (g == 1) a = i, b = n / i;
        }
    }
    cout << a << ' ' << b << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
