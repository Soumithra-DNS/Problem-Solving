#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5;
vector<bool> is_prime(N + 1, true);
void sieve()
{
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i <= N; i++)
    {
        if (is_prime[i] && (long long)i * i <= N)
        {
            for (int j = i * i; j <= N; j += i)
                is_prime[j] = false;
        }
    }
}
void solve()
{
    int n; cin >> n;
    
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    sieve();
    while (t--)
    {
        solve();
    }
    return 0;
}
