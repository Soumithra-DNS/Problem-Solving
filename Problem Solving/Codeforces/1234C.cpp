#include <bits/stdc++.h>
using namespace std;
#define int long long
bool f(int i, int j, int n, int prev, vector<string> arr)
{
    while (true)
    {
        if (i == 1 && j == n - 1)
        {
            if (prev == 0)
            {
                return ('3' <= arr[i][j] && arr[i][j] <= '6');
            }
            else
            {
                return (arr[i][j] == '1' || arr[i][j] == '2');
            }
        }
        if (i < 0 || i > 1 || j == n)
        {
            return false;
        }
        if (arr[i][j] == '1' || arr[i][j] == '2')
        {
            if (prev != i)
            {
                return false;
            }
            j++;
        }
        else
        {
            if (prev == i)
            {
                i = (i + 1) % 2;
            }
            else
            {
                j++;
                prev = i;
            }
        }
    }
    // return f(i, j, n, prev, arr);
}
void solve()
{
    int n;
    cin >> n;
    vector<string> arr;
    for (int i = 0; i < 2; i++)
    {
        string s;
        cin >> s;
        arr.push_back(s);
    }
    bool ans = f(0, 0, n, 0, arr);
    if (ans)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
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
