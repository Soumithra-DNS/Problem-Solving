#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string str; cin >> str;
    sort(str.begin(), str.end());
    int n = (str.size() - 1) / 2;
    int i = n, j = 0;

    while (i < str.size())
    {
        cout << str[i];
        if (j < n)
            cout << str[j];
        i++;
        j++;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;

    while (t--)
    {
        solve();
    }
    return 0;
}
