#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n; cin >> n;
    vector<int> arr(2 * n);
    int one = 0;
    for(int i = 0; i < 2 *n;i++){
        cin >> arr[i];
        if(arr[i]) one++;
    }
    int zero = 2 *n - one;
    int mn = one % 2;
    int mx = min(one, zero);
    cout << mn << " " << mx  << "\n";

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
