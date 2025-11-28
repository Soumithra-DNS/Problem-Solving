#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> arr;
    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] > v[i])
        {
            int x = v[i - 1] - v[i];
            arr.push_back(x);
            v[i] = v[i - 1];
        }
    }

    sort(arr.begin(), arr.end());

    int ans = 0;
    int z = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans += ((arr.size() - i + 1) * (arr[i] - z));
        while (arr[i] == arr[i + 1])
        {
            i++;
        }
        z = arr[i];
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
