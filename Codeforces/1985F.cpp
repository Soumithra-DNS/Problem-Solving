#include <bits/stdc++.h>
using namespace std;
#define int long long

int damage(vector<int> power, vector<int> cooldown, int turn)
{
    int total = 0;
    const int THRESHOLD = 2e5 + 10;
    const int INF_DAMAGE = 1e9;

    for (int i = 0; i < power.size(); i++)
    {

        if (turn < cooldown[i])
        {
            continue;
        }

        int x = (turn - 1) / cooldown[i];

        if (x > 0 && power[i] > THRESHOLD / x)
        {
            return INF_DAMAGE;
        }

        total += x * power[i];

        if (total > THRESHOLD)
        {
            return INF_DAMAGE;
        }
    }

    return total;
}
void solve()
{
    int h, n;
    cin >> h >> n;
    vector<int> power(n), cooldown(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> power[i];
        sum += power[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> cooldown[i];
    }

    h -= sum;

    if (h <= 0)
    {
        cout << 1 << "\n";
        return;
    }

    int l = 2, r = 1e18;
    int ans = 1e18;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        int total = damage(power, cooldown, mid);
        if (total >= h)
        {
            ans = min(ans, mid);
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans << "\n";
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
