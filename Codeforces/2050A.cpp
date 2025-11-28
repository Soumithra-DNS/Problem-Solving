// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// void solve()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<string> s(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> s[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         m -= (s[i].size());
//         if (m == 0)
//         {
//             cout << i + 1  << "\n";
//             return;
//         }
//         if (m < 0)
//         {
//             cout << i  << "\n";
//             return;
//         }
//     }
//     cout << 0 << "\n";
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

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FASTIO                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
bool comp(int a, int b)
{
    return a > b;
}

void wrong()
{
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    bool ok = 1;
    vector<string> vec(n);
    cin >> vec[0];
    if (vec[0].size() > m)
    {
        ok = 0;
    }
    else
    {
        cnt++;
        m -= vec[0].size();
    }
    bool ok2 = 1;
    for (int i = 1; i < n; i++)
    {
        cin >> vec[i];
        if (m >= vec[i].size() && ok2)
        {
            m -= vec[i].size();
            cnt++;
        }
        else
            ok2 = 0;
    }

    if (ok == 0)
        cout << 0 << "\n";
    else
        cout << cnt << "\n";
}
int32_t main()
{
    FASTIO;
    int test;
    cin >> test;
    while (test--)
    {
        wrong();
    }
    return 0;
}
