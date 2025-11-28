#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    // vector<int> arr(n), arr1(n), ans(n);
    long long sum = 0, cnt = 0, ans;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 2)
        {
            cnt++;
        }
        sum += x;
        ans = sum - (cnt / 3);
        if (cnt % 3 == 1 && i != 0)
        {
            ans--;
        }
        cout << ans << " ";
    }

    cout << "\n";
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
