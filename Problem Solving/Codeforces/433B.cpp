#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> arr1(n), arr2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    arr2 = arr1;
    sort(arr2.begin(), arr2.end());
    int len = sqrt(n) + 1;
    vector<int> pre1(len + 1), pre2(len + 1);
    for (int i = 0; i < n; i++)
    {
        pre1[i / len] += arr1[i];
    }

    // for(int i = 0; i < len; i++){
    //     cout << pre1[i] << " ";
    // }
    // cout << "\n";

    for (int i = 0; i < n; i++)
    {
        pre2[i / len] += arr2[i];
    }

    // for(int i = 0; i < len; i++){
    //     cout << pre2[i] << " ";
    // }
    // cout << "\n";

    int m;
    cin >> m;
    while (m--)
    {
        int type, l, r;
        cin >> type >> l >> r;
        l--;
        r--;
        int ans = 0;
        if (type == 1)
        {
            for (int i = l; i <= r;)
            {
                if (i % len == 0 && i + len - 1 <= r)
                {
                    ans += pre1[i / len];
                    i += len;
                }
                else
                {
                    ans += arr1[i];
                    i++;
                }
            }
        }
        else
        {
            for (int i = l; i <= r;)
            {
                if (i % len == 0 && i + len - 1 <= r)
                {
                    ans += pre2[i / len];
                    i += len;
                }
                else
                {
                    ans += arr2[i];
                    i++;
                }
            }
        }

        cout << ans << "\n";
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
