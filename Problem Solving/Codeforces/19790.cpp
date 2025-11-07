#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int mn = INT_MAX;
    for(int i = 0; i < n - 1; i++){
        mn = min(mn, max(v[i], v[i + 1]));
    }

    cout << mn - 1 << "\n";
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
