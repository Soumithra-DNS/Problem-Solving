#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n; cin >> n;
    vector<int>arr(n + 1);
    bool ok = true;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        if(abs(arr[i] - i) >= 2){
            ok = false;
        }
    }
    if(ok){
        cout << "YES" << "\n";
    }else{
        cout << "NO" << "\n";
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
