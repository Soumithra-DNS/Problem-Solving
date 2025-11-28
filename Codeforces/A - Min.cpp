#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define f(i, s, n) for (int i = s; i < n; i++)

void solve()
{
    int n, k;
    cin >> n >> k;
    int pnt;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
    }
    int ans = 1;
    n = n - k;
    ans += (n / (k - 1));
    if (n % (k - 1) > 0)
    {
        ans++;
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}
