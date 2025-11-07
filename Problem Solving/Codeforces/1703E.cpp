#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<string> v;
    vector<vector<bool>> vis(n, vector<bool>(n, true));
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (vis[i][j])
            {
                int x = i, y = j, one = 0, zero = 0, temp;
                for (int k = 0; k < 4; k++)
                {
                    if (v[x][y] == '1')
                    {
                        one++;
                    }
                    else
                    {
                        zero++;
                    }
                    vis[x][y] = false;
                    temp = x;
                    x = y;
                    y = n - temp - 1;
                }
                ans += (min(one, zero));
            }
        }
    }

    cout << ans << "\n";
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

// #include <bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     int n;
//     cin >> n;
//     // vector<string>v;
//     // vector<bool>vis[n + 1];
//     vector<string> v(n);
//     vector<vector<bool>> vis(n + 1, vector<bool>(n + 1, true));
//     // int v[n + 1][n + 1];
//     // bool vis[n + 1][n + 1] = {true};
//         cout << 1 << "\n";
//     for (int i = 0; i < n; i++)
//     {
//         // string s;
//         // cin >> s;
//         //v.push_back(s);
//     }
//     int ans = 0;
//     cout << ans << "\n";
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (vis[i][j] == true)
//             {
//                 int one = 0, zero = 0;
//                 int x = i, y = j;
//                 for (int k = 0; k < 4; k++)
//                 {
//                     if (vis[x][y] == true)
//                     {
//                         if (v[x][y] == '1')
//                         {
//                             one++;
//                         }
//                         else
//                         {
//                             zero++;
//                         }

//                         vis[x][y] = false;
//                     }
//                     int temp = x;
//                     x = y;
//                     y = n - temp + 1;
//                 }
//                 ans += (min(zero, one));

//             }
//         }
//     }

//     cout << ans << "\n";
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }
