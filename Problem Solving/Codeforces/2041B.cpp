#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int a, b; 
    cin >> a >> b;
    int mx = a + b;
    int l = 0, r = 2e9 + 7;

    while (l <= r) {
        int mid = (l + r) / 2;
        int sum = (mid * (mid + 1)) / 2;

        if (sum <= mx) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    cout << r << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
