#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int q;
    cin >> q;
    int L = INT_MAX, R = INT_MIN, total = 0;
    int LC = INT_MAX, RC = INT_MAX;
    int cnt = 0, costlen = INT_MAX;
    while (q--)
    {
        int l, r, c;
        cin >> l >> r >> c;
        if (l < L)
        {
            L = l;
            LC = INT_MAX;
        }
        if (l == L)
        {
            LC = min(LC, c);
        }

        if (r > R)
        {
            R = r;
            RC = INT_MAX;
        }
        if (r == R)
        {
            RC = min(RC, c);
        }
        if (cnt < r - l + 1)
        {
            cnt = r - l + 1;
            costlen = INT_MAX;
        }
        if (cnt == r - l + 1)
        {
            costlen = min(costlen, c);
        }
        total = LC + RC;
        if (R - L + 1 == cnt)
        {
            total = min(total, costlen);
        }

        cout << total << "\n";
    }
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

/*
if (l <= a && r >= b)
        {
            if (l == a && r == b)
            {
                total = min(total, c);
            }
            else
            {
                total = c;
            }
            a = l;
            b = r;
            aa = total;
            bb = total;
        }
        else if (l < a)
        {
            if (total > aa)
            {
                total -= aa;
            }
            a = l;
            total += c;
            aa = c;
        }
        else if (r > b)
        {
            if (total > bb)
            {
                total -= bb;
            }
            b = r;
            total += c;
            bb = c;
        }
        else if (r == b)
        {
            if (total != bb && c < bb)
            {
                total -= bb;
                total += c;
                bb = c;
            }
        }
        else if (l == a)
        {
            if (total != aa && c < aa)
            {
                total -= aa;
                total += c;
                aa = c;
            }
        }
*/
