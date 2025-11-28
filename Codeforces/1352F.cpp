#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, n1, n2;
    cin >> n >> n1 >> n2;
    string ans = "?";
    if (n2 > 0)
    {
        ans = "1";
        n2--;
        for (int i = 0; i <= n2; i++)
        {
            ans.push_back('1');
        }
    }
    if (n > 0)
    {
        if (ans.back() == '?')
        {
            ans = "0";
            n--;
        }else{
            n1--;
        }
        for (int i = 0; i <= n; i++)
        {
            ans.push_back('0');
        }
    }
    if (n1 > 0)
    {
        if (ans.back() == '?')
        {
            ans = "1";
        }
        for (int i = 0; i < n1; i++)
        {
            if (ans.back() == '1')
            {
                ans.push_back('0');
            }
            else
            {
                ans.push_back('1');
            }
        }
    }
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
