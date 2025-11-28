#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[n];
    map<int,int>vis;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        vis[a[i] % m]++;

    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        b[i] = b[i] % m;
        if(b[i] == 0){
            cnt += vis[0];
        }else{
            cnt += vis[m - b[i]];
        }
    }

    // int cnt = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if ((a[i] + b[j]) % m == 0)
    //         {
    //             cnt++;
    //         }
    //     }
    // }
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
