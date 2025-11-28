#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 100005;
vector<ll> v(N);

ll def(vector<ll> &v, int i)
{
    return max(0ll, max(v[i - 1], v[i + 1]) - v[i] + 1);
}

void solve()
{
    int n;
    cin >> n;
    // vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if (n & 1)
    {
        ll ans = 0;
        for (int i = 1; i < n - 1; i += 2)
        {
            ans += def(v, i);
        }

        cout << ans << "\n";
        return;
    }

    ll ans = 0;
    for (int i = 1; i < n - 1; i += 2)
    {
        ans += def(v, i);
    }
    ll mn = INT_MAX;
    ll total = ans;
    for (int i = n - 2; i > 0; i -= 2)
    {
        ans -= def(v, i - 1);
        ans += def(v, i);
        total = min(total, ans);
    }

    cout << total << "\n";
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
