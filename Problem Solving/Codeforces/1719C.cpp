#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> arr(n + 2), round(n + 2), endRound(n + 2);
    int mx = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        mx = max(mx, arr[i]);
    }
    int i = 1, j = 2, ind = 1;

    while (j <= n)
    {
        if (arr[i] > arr[j])
        {
            round[arr[i]]++;
            j++;
            endRound[arr[i]] = ind;
            ind++;
        }
        else
        {
            round[arr[j]]++;
            endRound[arr[j]] = ind;
            i = j;
            j++;
            ind++;
        }
    }
    while (q--)
    {
        int p, k;
        cin >> p >> k;
        int val = arr[p];
        int ans = round[arr[p]];
        if (k < endRound[arr[p]])
        {
            ans -= (endRound[arr[p]] - k);
            ans = max(0LL, ans);
        }

        // for (int i = 1; i <= min(n - 1, k); i++)
        // {
        //     if (val == round[i])
        //     {
        //         ans++;
        //     }
        // }

        if (arr[p] == mx)
        {
            ans += (k - (min(n - 1, k)));
        }
        cout << ans << "\n";
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
