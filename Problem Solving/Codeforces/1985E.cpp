#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int x, y, z, k;
    cin >> x >> y >> z >> k;
    int mx = INT_MIN;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= y; j++)
        {
            if (k % (i * j) == 0 && k / (i * j) <= z)
            {
                // int cnt = 0;
                // int a = i, b = j, c = k / (i * j);
                // set<pair<int, pair<int, int>>>s;
                // for(int e = a; e <= x; e++){
                //     for(int f = b; f <= y; f++){
                //         for(int g = c; g <= z; g++){
                //             s.insert({e-a,{f-b, g-c}});
                //         }
                //     }
                // }
                int res = (x - i + 1) * (y - j + 1) * (z - c + 1);

                mx = max(mx, res);
            }
        }
    }
    if (mx < 0)
    {
        mx = 0;
    }
    cout << mx << "\n";
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
