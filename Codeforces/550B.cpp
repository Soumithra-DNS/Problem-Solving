#include <bits/stdc++.h>
using namespace std;
#define int long long

int check_kth_bit(int x, int k)
{
    return (x >> k) & 1;
}

void print_on_bits(int x)
{
    for (int k = 0; k < 32; k++)
    {
        if (check_kth_bit(x, k))
        {
            cout << k << ' ';
        }
    }
    cout << '\n';
}

int count_on_bits(int x)
{
    int ans = 0;
    for (int k = 0; k < 32; k++)
    {
        if (check_kth_bit(x, k))
        {
            ans++;
        }
    }
    return ans;
}

bool is_even(int x)
{
    return !(x & 1);
}

int set_kth_bit(int x, int k)
{
    return x | (1 << k);
}

int unset_kth_bit(int x, int k)
{
    return x & (~(1 << k));
}

int toggle_kth_bit(int x, int k)
{
    return x ^ (1 << k);
}

bool check_power_of_2(int x)
{
    return count_on_bits(x) == 1;
}

int f(vector<int> &v, int n, int l, int r, int x)
{
    int p = (1LL << n) - 1;
    int ans = 0;

    for (int i = p; i > 0; i--)
    {
        int sum = 0;
        bool allOK = true;
        int mn = 1e9;
        int mx = -1;
        for (int j = 0; j < n; j++)
        {
            bool one = check_kth_bit(i, j);
            if (one)
            {
                sum += v[j];
                mn = min(mn, v[j]);
                mx = max(mx, v[j]);
            }
        }

        if ((sum >= l && sum <= r) && (mx - mn >= x))
        {
            ans++;
        }
    }
    return ans;
}

void solve()
{
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    cout << f(v, n, l, r, x) << "\n";
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
