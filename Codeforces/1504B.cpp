#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string str, ans;
    cin >> str >> ans;
    if (n & 1)
    {
        if (str[n - 1] != ans[n - 1])
        {
            cout << "NO" << "\n";
            return;
        }
        else
        {
            n--;
        }
    }

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '1')
        {
            v[i]++;
        }
        if (i != 0)
        {
            v[i] = v[i] + v[i - 1];
        }
    }

    int ope = 0;

    for (int i = n - 1; i >= 0; i -= 2)
    {
        if ((str[i] != ans[i] && str[i - 1] != ans[i - 1]))
        {
            if (ope % 2 == 0)
            {
                if (v[i] != (i + 1) / 2)
                {
                    cout << "NO" << "\n";
                    return;
                }
                ope++;
            }
        }
        else if (str[i] == ans[i] && str[i - 1] == ans[i - 1])
        {
            if (ope % 2 == 1)
            {
                if (v[i] != (i + 1) / 2)
                {
                    cout << "NO" << "\n";
                    return;
                }
                ope++;
            }
        }
        else
        {
            cout << "NO" << "\n";
            return;
        }
    }

    cout << "YES" << "\n";
    return;
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
