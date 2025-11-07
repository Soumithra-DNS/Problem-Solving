#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> str;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        str.push_back(s);
    }

    vector<vector<int>> v(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < m; j++)
        {
            if (str[i][j] == '*')
            {
                cnt++;
                v[i][j] = cnt;
            }
        }
    }

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         cout << v[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (str[i][j] == '*')
            {
                int k = 1;
                while (true)
                {
                    int x = i + k - 1;
                    int yl = j - k + 1;
                    int yr = j + k - 1;
                    if (x >= n || yl < 0 || yr >= m)
                    {
                        break;
                    }
                    if (yr - yl == v[x][yr] - v[x][yl] && v[x][yl] != 0)
                    {

                        cnt++;
                    }
                    else
                    {
                        break;
                    }
                    k++;
                }
            }
        }
    }

    cout << cnt << "\n";
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
