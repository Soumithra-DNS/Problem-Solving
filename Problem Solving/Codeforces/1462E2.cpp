#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;

int modExp(int x, int y, int mod)
{
    int result = 1;
    while (y > 0)
    {
        if (y % 2 == 1)
        {
            result = (result * x) % mod;
        }
        x = (x * x) % mod;
        y /= 2;
    }
    return result;
}

int modInverse(int x, int mod)
{
    return modExp(x, mod - 2, mod);
}

int calculate(int n, int r)
{
    if (r > n || r < 0)
        return 0;
    int ans = 1;
    for (int i = 0; i < r; i++)
    {
        ans = (ans * (n - i)) % mod;
        ans = (ans / (i + 1)) % mod;
        // ans = (ans * modInverse(i + 1, mod)) % mod;
    }
    return ans;
}

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int ans = 0;
    int last = 0;

    for (int fast = 0; fast < n; fast++)
    {
        while (last < n && arr[last] - arr[fast] <= k)
        {
            last++;
        }
        int range = last - fast - 1;
        if (range >= m - 1)
        {
            ans = (ans + calculate(range, m - 1)) % mod;
        }
    }

    cout << ans << "\n";
}

int32_t main()
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

// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// int mod = 1e9 + 10;

// int calculate(int n, int r)
// {
//     int ans = 1;
//     for (int i = n; i > r; i--)
//     {
//         ans = (ans * i) % mod;
//     }
//     for (int i = n - r; i >= 1; i--)
//     {
//         ans = (ans / i);
//     }
//     return ans % mod;
// }

// void solve()
// {
//     int n, m, k;
//     cin >> n >> m >> k;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     sort(arr.begin(), arr.end());
//     int fast = 0, mid = -1, last = 0;
//     int ans = 0;
//     for (int i = 0; i < n - 2;)
//     {
//         if (arr[last] - arr[fast] <= k)
//         {
//             while (arr[last] - arr[fast] <= k && last < n)
//             {
//                 last++;
//             }
//             last--;
//             if (last - fast >= m - 1)
//             {
//                 ans = (ans + calculate((last - fast), m)) % mod;
//                 if (fast < mid && mid <= last)
//                 {
//                     ans = (ans - calculate((mid - fast), m - 1)) % mod;
//                 }
//                 mid = last;
//             }else{
//                 i++;
//             }
//         }
//         else
//         {
//             i++;
//         }
//     }

//     cout << ans << "\n";
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
