#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    int one = 0;
    char arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == '1')
            {
                one++;
            }
        }
    }
    int ans = one;
    //cout << ans << "\n";


    if (one == n * m)
    {
        ans -= 2;
    }
    else
    {
        int two = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m - 1; j++)
            {
                if (arr[i][j] == '0' && arr[i][j + 1] == '0')
                {
                    cout << ans << "\n";
                    return;
                }
            }
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == '0' && arr[i + 1][j] == '0')
                {
                    cout << ans << "\n";
                    return;
                }
            }
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < m - 1; j++)
            {
                if (arr[i][j] == '0' && arr[i + 1][j + 1] == '0')
                {
                    cout << ans << "\n";
                    return;
                }
            }
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 1; j < m; j++)
            {
                if (arr[i][j] == '0' && arr[i + 1][j - 1] == '0')
                {
                    cout << ans << "\n";
                    return;
                }
            }
        }

        ans--;
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
