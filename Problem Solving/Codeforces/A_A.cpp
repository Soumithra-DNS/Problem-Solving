#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int arr[13] = {};
    arr[c] = 1;
    arr[d] = 1;
    int i = a;
    int cnt = 0;
    while (i != b)
    {
        if (i == c || i == d)
        {
            cnt++;
        }
        i++;
        if (i == 13)
        {
            i = 1;
        }
    }
    if (cnt == 2 || cnt == 0)
    {
        cout << "NO" << "\n";
        return;
    }
    i = a;
    while (i != b)
    {
        if (i == c || i == d)
        {
            cnt++;
        }
        i--;
        if (i == 0)
        {
            i = 12;
        }
    }
    if (cnt == 2)
    {
        cout << "YES" << "\n";
        return;
    }

    cout << "NO" << "\n";
    return;
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