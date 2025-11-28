#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k; cin >> n >> k;
    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int top = arr[n - 1];
    int left = top;
    int right = top + k - 1;
    for(int i = 0; i < n - 1; i++){
        int x = (top - arr[i]) / (2 * k);
        arr[i] = arr[i] + (2 * k * x);
        if( top - arr[i] >= k){
            arr[i] += (2 * k);
        }
        left = max(left, arr[i]);
        right = min(right, arr[i] + k - 1);
    }
    if(left > right){
        cout << -1 << "\n";
    }else{
        cout << left << "\n";
    }
    // for(int i = 0; i < n; i++){
    //     cout << arr[i] << " ";
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
