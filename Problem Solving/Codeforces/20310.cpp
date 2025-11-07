#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n; cin >> n;
    vector<int>arr(n);
    int mx = 0;
    int cnt = 1;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(i != 0 && arr[i - 1] <= arr[i]){
            cnt++;
        }else{
            mx = max(mx, cnt);
            cnt = 1;
        }
    }
    mx = max(mx, cnt);
    cout << n - mx << "\n";
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
