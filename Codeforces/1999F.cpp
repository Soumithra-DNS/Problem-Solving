// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// const int mod = 1e9 + 7;

// int modExp(int x, int y, int mod)
// {
//     int result = 1;
//     while (y > 0)
//     {
//         if (y % 2 == 1)
//         {
//             result = (result * x) % mod;
//         }
//         x = (x * x) % mod;
//         y /= 2;
//     }
//     return result;
// }

// int modInverse(int x, int mod)
// {
//     return modExp(x, mod - 2, mod);
// }

// int calculate(int n, int r)
// {
//     if (r > n || r < 0)
//         return 0;
//     int ans = 1;
//     for (int i = 0; i < r; i++)
//     {
//         ans = (ans * (n - i)) % mod;
//         ans = (ans * modInverse(i + 1, mod)) % mod;
//     }
//     return ans;
// }

// void solve()
// {
//     int n, k; cin >> n >> k;
//     vector<int>arr(n);
//     int one = 0;
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//         if(arr[i]) one++;
//     }
//     int zero = n - one;
//     int mid = (k + 1) / 2;
//     int notAllow = 0;
//     for(int i = mid; mid <= zero; i++){
//         notAllow += calculate(one, n - i);
//     }
//     cout << notAllow << "\n";
// }

// int32_t main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }

/*
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define int ll
#define pii pair<int, int>
const int P = 1e9 + 7;
ll jc[200005], ny[200005];
int qpow(ll x, ll y)
{
    ll res = 1;
    while (y)
    {
        if (y & 1)
            res = res * x % P;
        x = x * x % P;
        y >>= 1;
    }
    return res;
}
int C(int x, int y)
{
    if (y > x)
        return 0;
    return jc[x] * ny[y] % P * ny[x - y] % P;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    int cnt1 = 0, cnt0 = 0;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        if (x)
            cnt1++;
        else
            cnt0++;
    }
    int ans = 0;
    for (int i = k / 2 + 1; i <= min(cnt1, k); i++)
    {
        ans += C(cnt1, i) * C(cnt0, k - i) % P;
        ans %= P;
    }
    cout << ans << '\n';
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    jc[0] = 1;
    ny[0] = 1;
    for (int i = 1; i <= 2e5; i++)
        jc[i] = jc[i - 1] * i % P, ny[i] = qpow(jc[i], P - 2);
    cin >> t;
    while (t--)
    {
        solve();
    }
}
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;
const int N = 2e5 + 5;
int fact[N], in[N];

int modExp(int x, int y)
{
    int res = 1;
    while (y)
    {
        if (y % 2 == 1)
            res = res * x % MOD;
        x = x * x % MOD;
        y /= 2;
    }
    return res;
}

int modInverse(int x)
{
    return modExp(x, MOD - 2);
}

int comb(int n, int r)
{
    if (r > n)
        return 0;

    return fact[n] * in[r] % MOD * in[n - r] % MOD;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    int one = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i])
            one++;
    }
    int zero = n - one;
    int mid = (k + 1) / 2;

    int ans = 0;
    for (int i = mid; i <= min(one, k); i++)
    {
        ans = (ans + comb(one, i) * comb(zero, k - i) % MOD) % MOD;
    }
    cout << ans << "\n";
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    fact[0] = 1;
    in[0] = 1;
    for (int i = 1; i <= N; i++)
    {
        fact[i] = fact[i - 1] * i % MOD;
        in[i] = modExp(fact[i], MOD - 2);
    }

    while (t--)
    {
        solve();
    }

    return 0;
}
