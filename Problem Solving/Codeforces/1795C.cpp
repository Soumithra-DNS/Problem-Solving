#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n; cin >> n;
    vector<int>a(n + 2), b(n + 2), pre(n + 2), cnt(n + 2), ans(n + 2);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++){
        cin >> b[i];
        if(i == 1) pre[i] = b[i];
        else{
            pre[i] = pre[i - 1] + b[i];
        }
    }

    for(int i = 1; i <= n; i++){
        int l = i;
        int r = n;
        while(l <= r){
            int mid = (l + r) / 2;
            if(pre[mid] - pre[i - 1] <= a[i]){
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        cnt[i]++;
        cnt[l]--;
        ans[l] =ans[l] + a[i] - (pre[l - 1] - pre[i - 1]);
        //cout << ans[l] << "\n";
    }

    for(int i = 1; i <= n; i++){
        cnt[i] = cnt[i - 1] + cnt[i];
        ans[i] = ans[i] + (cnt[i] * b[i]);
        cout << ans[i] << " ";
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
