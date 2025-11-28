#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    multiset<int> st;
    int ans = LLONG_MAX;
    for (int i = n - 1; i >= 0; i--)
    {
        st.insert(v[i]);
        auto it = distance(st.begin(), st.upper_bound(v[i]));
        it--;
        it = (n - i) - it;
        ans = min(ans, (i + it - 1));
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
