#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y; cin >> x >> y;
    int ans = ( y + 1) / 2;
    x = x - (ans * 7);
    if(y & 1){
        x -= 4;
    }
    if(x > 0){
        ans += ( x / 15);
        if(x % 15 != 0){
            ans++;
        }
    }
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
