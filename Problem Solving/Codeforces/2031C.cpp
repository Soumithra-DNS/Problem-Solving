#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    if (n % 2 && n < 27)
    {
        cout << -1 << "\n";
        return;
    }

    if (n % 2 == 0)
    {
        int c = 1;
        for (int i = 1; i <= n; i += 2)
        {
            arr[i] = c;
            arr[i + 1] = c;
            c++;
        }
    }
    else
    {
        arr[1] = 1;
        arr[10] = 1;
        arr[26] = 1;
        arr[11] = 2;
        arr[27] = 2;
        int c = 3, cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i == 1 || i == 10 || i == 11 || i == 26 || i == 27)
            {
                continue;
            }
            if (cnt == 2)
            {
                cnt = 0;
                c++;
            }
            arr[i] = c;
            cnt++;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
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
