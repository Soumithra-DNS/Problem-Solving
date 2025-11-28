#include <bits/stdc++.h>
using namespace std;
#define int long long
template <typename T>
void show(const T &container)
{
    for (const auto &x : container)
    {
        cout << x << " ";
    }
    cout << "\n";
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[x]++;
    }
    sort(v.begin(), v.end());
    // show(v);
    int ans = 0;
    bool alice = true;
    for (int i = 0; i <= n; i++)
    {
        if (v[i] == 0)
            continue;
        if (v[i] == 1 && alice)
        {
            // cout << i << " ";
            ans += 2;
            alice = false;
        }
        else if (v[i] == 1 && !alice)
        {
            alice = 1;
        }
        else if (v[i] % 2 == 1 && alice)
        {
            ans += 1;
            alice = 0;
        }
        else if (v[i] % 2 == 1 && !alice)
        {
            ans += 1;
            alice = 1;
        }
        else if (v[i] % 2 == 0 && alice)
        {
            // cout << i << " ";
            ans += 1;
            alice = 0;
        }
        else if (v[i] % 2 == 0 && !alice)
        {
            // cout << i << "    ";
            ans += 1;
            alice = 1;
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
