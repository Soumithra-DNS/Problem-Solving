#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k; cin >> n >> k;
    int ans = 1;
    ans += ((n - 1) * k);
    cout << ans << "\n";

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
