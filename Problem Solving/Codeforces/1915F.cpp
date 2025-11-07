#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll long long
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

void solve()
{
    ll n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (auto &p : v)
        cin >> p.second >> p.first;
    sort(v.begin(), v.end());

    ordered_set os;
    ll ans = 0;

    for (auto it : v)
    {
        ans += os.size() - os.order_of_key(it.second);
        os.insert(it.second);
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
