#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, q; cin >> n >> q;
    for(int i = 1; i < n; i++){
        cout << i << " " << i + 1 << "\n";
    }
    int cur = n - 1, v = n - 1;
    while(q--){
        int d; cin >> d;
        if(d == cur){
            cout << "-1 -1 -1" << "\n";
            continue;
        }
        cout << n << " " << v << " " << n - d << "\n";
        cur = d;
        v = n - d;
    }
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
