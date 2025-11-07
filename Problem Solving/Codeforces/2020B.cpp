#include <bits/stdc++.h>
using namespace std;
#define int long long
int isqrt(int n)
{
    int x = sqrt(n);
    if (x * x > n)
    {
        x--;
    }
    return x;
}

void solve()
{
    int k;
    cin >> k;
    int n = k + isqrt(k);
    while (n - isqrt(n) < k)
    {
        n++;
    }
    cout << n << "\n";
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
