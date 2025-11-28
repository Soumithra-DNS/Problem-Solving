#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{

    multiset<int, greater<int>> left;
    multiset<int> right;
    multiset<int, greater<int>>::iterator it_left;
    multiset<int>::iterator it_right;
    int n;
    cin >> n;
    while (n--)
    {
        char ope;
        int l, r;
        cin >> ope >> l >> r;
        if (ope == '+')
        {
            left.insert(l);
            right.insert(r);
        }
        else
        {
            it_left = left.find(l);
            left.erase(it_left);
            it_right = right.find(r);
            right.erase(it_right);
        }

        int ll = *left.begin();
        int rr = *right.begin();
        (ll > rr) ? cout << "YES" << "\n" : cout << "NO" << "\n";
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
