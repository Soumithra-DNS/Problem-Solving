#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    string s, c;
    cin >> s;
    set<int> st;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        st.insert(x);
    }
    cin >> c;
    sort(c.begin(), c.end());

    int l = 0;
    for (auto i : st)
    {
        s[i - 1] = c[l];
        l++;
    }

    cout << s << "\n";
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
