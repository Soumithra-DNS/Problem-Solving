#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> v(n);
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        for (int j = 0; j < v[z - 1].size(); j++)
        {
            cout << v[z - 1][j] << " ";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
