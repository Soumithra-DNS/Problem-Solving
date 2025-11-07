#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n; cin >> n;
    vector<int>arr(n);
    int ans = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] == 0){
            i != 0 ? ans += 2 : ans++;
        }else{
            i != n - 1 ? ans += 2 : ans++;
        }
    }
    cout << ans << "\n";
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
