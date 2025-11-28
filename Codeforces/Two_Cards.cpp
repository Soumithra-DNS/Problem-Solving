#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n; cin >> n;
    vector<pair<int, int>>arr(n), arr2(n);
    int cnt = 1, mx = INT_MIN;
    for(int i = 0; i < n; i++){
        cin >> arr[i].first;
        mx = max(mx, arr[i].first);
    }
    for(int i = 0; i < n; i++){
        cin >> arr[i].second;
        mx = max(mx, arr[i].second);
    }
    sort(arr.begin(), arr.end());
    int mxx = max(arr[n - 1].first, arr[n - 1].second);
    int mxx1 = max(arr[n - 2].first, arr[n - 2].second);
    if(mx == mxx){
        if(mxx1 == mxx){
            cout << "No" << "\n";
        }else{
            cout << "Yes" << "\n";
        }
    }else{
        cout << "Yes" << "\n";
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
