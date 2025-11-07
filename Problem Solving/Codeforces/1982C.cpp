#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> v(n);
    int sum = 0, cnt = 0;
    int ptr = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
        if (l <= sum && sum <= r)
        {
            cnt++;
            sum = 0;
            ptr = i + 1;
        }
        if (sum > r)
        {
            while (sum > r && ptr < i)
            {
                sum -= v[ptr];
                ptr++;
            }
            if (l <= sum && sum <= r)
            {
                cnt++;
                sum = 0;
                ptr = i + 1;
            }
            else if (sum > r)
            {
                sum = 0;
                ptr = i + 1;
            }
        }
    }
    cout << cnt << "\n";
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
