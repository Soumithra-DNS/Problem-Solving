#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, n;
    cin >> x >> n;
    while (x % n != 0)
    {
        n = (x - 1) / (x / n) + 1;
    }
    cout << x / n <<"\n";
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