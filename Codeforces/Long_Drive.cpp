#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int ans;
    int x, y; cin >> x >> y;
    for(int i = y + 1; i <= 100; i++){
        ans = (10*(x - y)/ (y - i));
        if(y * (10 + ans) - (i * ans) == x){
            break;
        }
    }
    if(ans == 0){
        ans++;
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
