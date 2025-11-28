#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int A = 0;

    while (true)
    {
        int dd = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'U')
            {
                A++;
                s.erase(i, 1);
                if (s.size() == 1 || s.size() == 0)
                {
                    continue;
                }
                int x = i;
                if (x == s.size())
                {
                    x = 0;
                }
                int y = x - 1;
                if (y == -1)
                {
                    y = s.size() - 1;
                }
                if (s[x] == 'U')
                {
                    s[x] = 'D';
                }
                else
                {
                    s[x] = 'U';
                }

                if (s[y] == 'U')
                {
                    s[y] = 'D';
                }
                else
                {
                    s[y] = 'U';
                }

                break;
            }
            else
            {
                dd++;
            }
        }
        if (dd == s.size())
        {
            break;
        }
        if (s.size() == 0)
        {
            break;
        }
        if (s.size() == 1 && s[0] == 'D')
        {
            break;
        }
    }
    if (A % 2)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
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
