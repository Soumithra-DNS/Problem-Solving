#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> cnt(35);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        for (int j = 0; j < 32; j++)
        {
            if ((x >> j) & 1)
            {
                cnt[j]++;
            }
        }
    }
    for(int i = 30; i >= 0; i--){
        if(cnt[i] != n && (n - cnt[i] <= k)){
            k -= (n - cnt[i]);
            cnt[i] += n - cnt[i];
        }
    }

    int ans = 0;
    for(int i = 0; i < 32; i++){
        if(cnt[i] == n){
            ans = (ans | (1 << i));
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
