#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define mp make_pair
#define pf push_front
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(x) (int)(x).size()
#define ff first
#define ss second

const int MOD = 1e9 + 7;
const int INF = 1e18;
const ld PI = 3.141592653589793238462;
const ld EPS = 1e-9;
const int N = 3e5 + 9;

vector<bool> is_prime(N + 1, true);

void sieve()
{
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= N; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= N; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
}

template <typename T>
void read(vector<T> &v)
{
    for (auto &x : v)
        cin >> x;
}

template <typename T>
void show(const T &container)
{
    for (const auto &x : container)
        cout << x << " ";
    cout << "\n";
}

void solve()
{

    int x, k;
    cin >> x >> k;
    if (k > 1 && x > 9 || ( k == 1 && x == 1))
    {
        cout << "NO" << "\n";
        return;
    }
    if (x < 10 && k > 1)
    {
        int nn = x;
        k--;
        while (k--)
        {
            nn = nn * 10 + x;
        }
        x = nn;
    }

    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            cout << "NO" << "\n";
            return;
        }
    }

    cout << "YES\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}