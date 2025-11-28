#include <bits/stdc++.h>
using namespace std;
int ans;
int arr[5] = {1, 3, 6, 10, 15};
void rec(int ind, int n, int cnt)
{
    if (n == 0)
    {
        ans = min(ans, cnt);
        return;
    }
    if (n < 0 || ind < 0)
    {
        return;
    }

    rec(ind - 1, n, cnt);
    rec(ind - 1, n - arr[ind - 1], cnt + 1);

    int x = (arr[ind] + 1) / 2;
    if (x * arr[ind] >= n)
    {
        rec(ind, n - arr[ind], cnt + 1);
    }else{
        return;
    }
}

void solve()
{
    int n;
    cin >> n;
    ans = INT_MAX;
    int cnt = 0;
    rec(4, n, cnt);
    cout << ans << "\n";
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