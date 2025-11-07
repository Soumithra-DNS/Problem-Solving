#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s;
    cin >> s;
    int B = 0, S = 0, C = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'B')
        {
            B++;
        }
        else if (s[i] == 'S')
        {
            S++;
        }
        else
        {
            C++;
        }
    }
    int nB, nS, nC;
    cin >> nB >> nS >> nC;
    int pB, pS, pC;
    cin >> pB >> pS >> pC;
    int R;
    cin >> R;
    int l = 0;
    int r = 1e14;
    int mid = 0;
    while (true)
    {
        mid = (l + r) / 2;
        int f = max(0LL, (B * mid) - nB) * pB + max(0LL, (S * mid) - nS) * pS + max(0LL, (C * mid) - nC) * pC;
        int m = mid + 1;
        int F = max(0LL, (B * m) - nB) * pB + max(0LL, (S * m) - nS) * pS + max(0LL, (C * m) - nC) * pC;
        if (f - R == 0)
        {
            break;
        }
        if (f - R < 0 && F - R > 0)
        {
            break;
        }
        if (f < R)
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }

    cout << mid << "\n";
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
