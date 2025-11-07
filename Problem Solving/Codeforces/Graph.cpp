#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> v(n + 1, vector<int>(n + 1, 0));
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        for (int j = 0; j < y; j++)
        {
            int z;
            cin >> z;
            v[x][z] = 1;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << v[i][j];
            if (j < n)
                cout << ' ';
        }
        cout << "\n";
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;

    while (t--)
    {
        solve();
    }
    return 0;
}
