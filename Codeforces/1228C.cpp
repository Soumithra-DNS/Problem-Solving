#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 1e9+7

int power(int a, int b) {
    int ans = 1;
    while (b > 0) {
        if (b & 1)
            ans =  ans * a;
        a = a * a;
        b >>= 1;
    }
    return ans;
}

void solve()
{
    int n, x; cin >> x >> n;
    cout << power(x, n) << "\n";

}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    
    while (t--)
    {
        solve();
    }
    return 0;
}
