#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m; cin >> n >> m;
    vector<int>arr(n);
    int mx = -1;
    int mxPos = -1;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        mx = max(mx, arr[i]);
    }
    while(m--){
        char sine;
        int l, r;
        cin >> sine >> l >> r;
        if(sine == '+' && l <= mx && mx <= r){
            mx++;
        }else if(sine == '-' && l <= mx && mx <= r){
            mx--;
        }
        cout << mx << " ";
    }
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
