#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n), ans;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    k--;
    int temp = arr[0] + arr[n - 1], l = 1;
    while (k--)
    {
        temp += arr[l];
        l++;
    }
    ans.push_back(temp);
    for (int i = l; i < n - 1; i++)
    {
        ans.push_back(arr[i]);
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
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
