#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, x, sum = 0; cin >> n >> k >> x;
    vector<int>arr(n + 1, 0);
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr.begin() + 1, arr.end() - 1);

    // for(int i = 1; i <= n; i++){
    //     arr[i] = arr[i] + arr[i - 1];
    // }

    int mx = 0;
    for(int i = 0; i <= k; i++){
        sum -= arr[n + 1 - i];
        while()
        
        mx = max(mx, sum - 2 * sub_value);
    }
    cout << mx << endl;

}

int main()
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
