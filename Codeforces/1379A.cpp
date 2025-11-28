#include <bits/stdc++.h>
using namespace std;
#define int long long
string trg = "abacaba";
int count(string str)
{
    int cnt = 0;
    for (int i = 0; i <= str.size() - 7; i++)
    {
        if (str.compare(i, 7, trg) == 0)
        {
            cnt++;
        }
    }
    return cnt;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = count(s);

    if (cnt > 1)
    {
        cout << "No" << "\n";
        return;
    }

    for (int i = 0; i <= n - 7; i++)
    {
        bool change = true;
        string st = s;
        if (st[i] == trg[0] || st[i] == '?')
        {
            for (int j = 0; j < 7; j++)
            {
                if (trg[j] == st[i + j] || st[i + j] == '?')
                {
                    if (cnt != 1 && st[i + j] == '?')
                    {

                        st[i + j] = trg[j];
                    }
                }
                else
                {
                    change = false;
                    break;
                }
            }
            if (change && count(st) == 1)
            {
                for (int i = 0; i < n; i++)
                {
                    if (st[i] == '?')
                    {
                        st[i] = 'd';
                    }
                }
                cout << "Yes" << "\n";
                cout << st << "\n";
                return;
            }
        }
    }

    cout << "No" << "\n";
    return;
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
