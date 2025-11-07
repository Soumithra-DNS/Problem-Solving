#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n), vv(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int cnt = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (v[i] % 2 && sum == 0)
        {
            cnt += (v[i] / 2);
            vv[i] = v[i] / 2;
            sum += v[i] / 2;
            v[i] = 1;
        }
        else if (v[i] % 2 && sum > 0)
        {
            v[i]++;
            sum--;
            cnt += (v[i] / 2);
            vv[i] = v[i] / 2;
            sum += v[i] / 2;
            v[i] = 0;
        }
        else
        {
            cnt += (v[i] / 2);
            vv[i] = v[i] / 2;
            sum += v[i] / 2;
            v[i] = 0;
        }
        // cout << cnt << "\n";
    }
    sum = 0;
    int z = 0;
    for (int i = n - 2; i > 0; i--)
    {
        if (v[i] == 1)
        {
            if (sum == 0)
            {
                // cout << -1 << "\n";
                // return;
                z++;
            }
            else
            {
                if (z > 0)
                {
                    z--;
                    cnt++;
                }

                v[i]--;
                cnt++;
            }
        }

        sum += vv[i];
        // cout << sum << "\n";
    }
    if (z > 0)
    {
        cout << -1 << "\n";
        return;
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