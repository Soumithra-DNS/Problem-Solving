#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s, y; cin >> s >> y;
    swap(s[0], y[0]);
    cout << s << " " << y << "\n";
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
