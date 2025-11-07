#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n; cin >> n;
    vector<int>arr(n + 1), cnt(n + 1);
    int ne = 0;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        if(arr[i] < 0) ne++;
        cnt[i] = ne;
    }
    
    int pos = 0, neg = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j <= n; j++){
            int val = cnt[j] - cnt[i];
            if(val % 2){
                neg++;
            }else{
                pos++;
            }
        }
    }
    cout << neg << " " << pos << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
