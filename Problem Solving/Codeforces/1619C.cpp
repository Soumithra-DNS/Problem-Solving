#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string a, s, ans = "";
    cin >> a >> s;
    int n = a.size() - 1;
    int m = s.size() - 1;

    while (m >= 0)
    {
        if (n < 0)
        {
            ans = s[m] + ans;
            m--;
            continue;
        }

        if (s[m] < a[n])
        {
            int temp = s[m] - '0';
            m--;
            if (s[m] != '1')
            {
                cout << -1 << "\n";
                return;
            }
            temp = temp + ((s[m] - '0') * 10);
            m--;
            temp = temp - (a[n] - '0');
            n--;
            string r = to_string(temp);
            ans = r + ans;
        }
        else
        {
            int z = s[m] - a[n];
            m--;
            n--;
            string h = to_string(z);
            ans = h + ans;
        }
    }
    if (n >= 0)
    {
        cout << -1 << "\n";
        return;
    }
    while (ans[0] == '0')
    {
        ans.erase(0, 1);
    }

    cout << ans << "\n";

    // long long int a, s;
    // cin >> a >> s;
    // long long int b = 1, x, y, n, z;
    // while (s)
    // {
    //     y = s % 10;
    //     s = s / 10;
    //     x = a % 10;
    //     a = a / 10;
    //     if (x > y)
    //     {
    //         //n = log10(y) + 1;
    //         z = s % 10;
    //         if (z != 1)
    //         {
    //             cout << -1 << "\n";
    //         }
    //         s = s / 10;
    //         z = z * 10;
    //         y = z + y;
    //     }
    //     int sub = y - x;
    //     if(sub == 0){

    //     }
    //     cout << sub << "\n";
    //     n = log10(b) + 1;
    //     sub = sub * pow(10, n);
    //     cout << sub << " " << pow(10, n) << "\n";
    //     b = sub + b;
    // }
    // //cout << pow(10, 18) << "\n";
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
