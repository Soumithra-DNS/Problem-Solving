#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int cnt = 0, r = n - 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (b[i] < a[r])
        {
            while (r >= 0 && b[i] < a[r])
            {
                cnt++;
                r--;
            }
            r--;
        }
        else
        {
            r--;
        }
        if (r < 0)
        {
            break;
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
