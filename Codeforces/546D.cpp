#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 5000050;
vector<char> status(N, 1);
vector<int> dv(N, 1);
vector<int> ans(N, 0);
vector<int> prime;

void siv()
{
    for (int i = 2; i < N; i++)
    {
        if (status[i] == 1)
        {
            for (int j = i; j < N; j += i)
            {
                status[j] = 0;
                dv[j] = i;
            }
        }
    }
    for (int i = 2; i < N; i++)
    {
        int x = 0;
        int n = i;
        while (n > 1)
        {
            x++;
            n /= dv[n];
        }
        ans[i] = ans[i - 1] + x;
    }
}

void solve()
{
    int a, b;
    cin >> a >> b;

    cout << ans[a] - ans[b] << "\n";
    // int n = 1;
    // for (int i = b + 1; i <= a; i++)
    // {
    //     n *= i;
    // }
    // cout << n << "\n";
    // int cnt = 0;
    // for (int i = 0; i < prime.size(); i++)
    // {
    //     if (n == 1)
    //     {
    //         break;
    //     }
    //     if (n % prime[i] == 0)
    //     {
    //         n = n / prime[i];
    //         cnt++;
    //         i = -1;
    //     }
    // }
    // cout << cnt << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    siv();
    while (t--)
    {
        solve();
    }
    return 0;
}
