#include <bits/stdc++.h>
using namespace std;
#define int long long

int ternary(int l, int r, int key, vector<int> &arr)
{
    int start = l - 1;
    while (l <= r)
    {
        int m1 = l + (r - l) / 3;
        int m2 = r - (r - l) / 3;
        if (arr[m1] - arr[start] == key)
            return m1;
        if (arr[m2] - arr[start] == key)
            return m2;
        if (arr[m2] - arr[start] < key)
        {
            l = m2 + 1;
        }
        else if (arr[m1] - arr[start] > key)
        {
            r = m1 - 1;
        }
        else
        {
            l = m1 + 1;
            r = m2 - 1;
        }
    }
    return r;
}

int total_sum(int n)
{
    return (n * (n + 1)) / 2;
}

int total_neg_sum(int n)
{
    return -(n * (n + 1)) / 2;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];

        arr[i] = arr[i] + arr[i - 1];
    }

    int q;
    cin >> q;
    while (q--)
    {
        int l, u;
        cin >> l >> u;
        int ans = ternary(l, n, u, arr);
        int sum = total_sum(arr[ans] - arr[l - 1]);
        int ptr = ans + 1;
        while (true)
        {0
            int m = arr[ptr] - arr[l - 1];
            
                int s = total_sum(u);
                s += total_neg_sum(m - u - 1);
                if (sum < s)
                {
                    ans++;
                    ptr++;
                }
                else
                {
                    break;
                }
            
        }
        cout << ans << " ";
    }
    cout << "\n";
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
