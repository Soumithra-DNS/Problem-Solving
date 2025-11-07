#include <bits/stdc++.h>
using namespace std;
#define int long long

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
    int A = 0, B = 0, cnt = 0, cnt1 = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == -1 && b[i] == -1)
        {
            cnt++;
            continue;
        }
        else if (a[i] == 1 && b[i] == 1)
        {
            cnt1++;
            continue;
        }
        if (a[i] == 1)
        {
            A++;
        }
        if (b[i] == 1)
        {
            B++;
        }
    }
    while (cnt)
    {
        if (A > B)
        {
            A--;
        }
        else
        {
            B--;
        }
        cnt--;
    }
    while (cnt1--)
    {
        if (A < B)
        {
            A++;
        }
        else
        {
            B++;
        }
    }

    cout << min(A, B) << "\n";
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
