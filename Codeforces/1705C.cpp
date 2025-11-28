#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, c, q;
    cin >> n >> c >> q;
    string s;
    vector<char> v;
    for (int i = 0; i < n; i++)
    {
        char ch;
        cin >> ch;
        v.push_back(ch);
    }
    // cin >> s;
    while (c--)
    {
        long long int l, r;
        cin >> l >> r;
        for (long long int i = l; i <= r; i++)
        {
            v.push_back(v[i - 1]);
        }
        // string sub = s.substr(l - 1, r - l + 1);
        // s = s + sub;
    }

    while (q--)
    {
        long long int k;
        cin >> k;
        cout << v[k - 1] << "\n";
    }
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
