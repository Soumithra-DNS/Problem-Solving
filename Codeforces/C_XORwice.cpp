#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    int x = 0;
    for (int i = 31; i >= 0; i--)
    {
        if ( ((1 << i) & a ) && ((1 << i) & b))
        {
            x |= (1 << i);
        }
    }
    cout << ((a ^ x )+ (b ^ x ))<< "\n";
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


