#include <bits/stdc++.h>
using namespace std;
#define int long long
int f(int n)
{
    return pow(2, n) - 1;
}
int g(int n, int m)
{
    return pow(2, n) * (m * (m + 1) / 2);
}

void solve()
{
    int n;
    cin >> n;
    int z = INT_MAX, o = INT_MAX;
    int x = INT_MAX;
    // for (int i = n; i > 0; i--)
    // {
    //     int a = f(i);
    //     int b = g(i, n - i);
    //     //cout << a << " " << b << "\n";
    //     if (abs(a - b) < x)
    //     {
    //         z = i;
    //         x = abs(a - b);
    //     }
    // }
    if (n == 1)
    {
        cout << "0" << "\n";
        return;
    }
    for (int i = 1; i < n; i++)
    {
        cout << "0";
    }
    cout << "1";

    cout << "\n";
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
