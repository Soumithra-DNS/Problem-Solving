#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, q, k;
    cin >> n >> q >> k;
    vector<int> v(n + 1), VV(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            VV[i] = (v[i + 1] - 2);
        }
        else if (i == n)
        {
            VV[i] = VV[i - 1] + (k - v[i - 1] - 1);
        }
        else
        {
            VV[i] = VV[i - 1] + (v[i + 1] - v[i - 1] - 2);
        }
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int ans = 0;

        if (l == r)
        {
            ans += (k - 1);
        }
        else
        {
            ans += (v[l + 1] - 2);
            ans += (VV[r - 1] - VV[l]);
            ans += (k - v[r - 1] - 1);
        }

        cout << ans << "\n";
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


/*
codeforces
c      c
odefor
dfr
dr
f

c    def  rces
rces
cs
c 
s
*/