#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int l, r; cin >> l >> r;
    int cnt = 0;
    for(int i = l; i <= r; i++){
        if(i % 2 && i + 2 <= r){
            cnt++;
            i += 2;
        }
    }
    cout << cnt << "\n";
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
