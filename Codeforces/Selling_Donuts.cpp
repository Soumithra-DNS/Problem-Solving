#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m; cin >> n >> m;
    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int ans = 0;
    for(int i = 0; i < m; i++){
        int x; cin >> x;
        if(arr[x - 1] == 0){
            ans++;
            continue;
        }
        arr[x - 1]--;
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
