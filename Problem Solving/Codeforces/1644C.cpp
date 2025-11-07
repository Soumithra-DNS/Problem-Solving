#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, x; cin >> n >> x;
    vector<int>v(n + 1), ans(n + 1, INT_MIN);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    ans[0] = 0;
    for(int i = 0; i < n; i++){
        int temp = 0;
        for(int j = i; j < n; j++){
            temp += v[j];
            ans[j - i + 1] = max(ans[j - i + 1], temp);
        }
    }
    for(int i = 0; i <= n; i++){
        int val = 0;
        for(int j = 0; j <= n; j++){
            val = max(val, min(i, j) * x + ans[j]);
        }
        cout << val << " ";
    }
    cout << "\n";
    // for(int i = 0; i <= n; i++){
    //     cout << ans[i] << " ";
    // }
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

