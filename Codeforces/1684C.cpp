#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    vector<int> pos;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp = arr[i];
        sort(temp.begin(), temp.end());
        for (int j = 0; j < m; j++)
        {
            if (temp[j] != arr[i][j])
            {
                pos.push_back(j);
            }
        }
        if (!pos.empty())
        {
            break;
        }
    }

    if (pos.size() == 0)
    {
        cout << 1 << " " << 1 << "\n";
        return;
    }
    if (pos.size() > 2)
    {
        cout << -1 << "\n";
        return;
    }

    for (int i = 0; i < n; i++)
    {
        swap(arr[i][pos[0]], arr[i][pos[1]]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (arr[i][j] < arr[i][j - 1])
            {
                cout << -1 << "\n";
                return;
            }
        }
    }
    cout << pos[0] + 1 << " " << pos[1] + 1 << "\n";
    return;
}

int main()
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
