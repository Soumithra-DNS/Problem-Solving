#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, p, k;
    cin >> n >> p >> k;
    string s;
    cin >> s;
    long long x, y;
    cin >> x >> y;
    map<long long, long long> counter;
    int P = p - 1;
    for (int i = P; i < n; i++)
    {
        if (i >= P)
        {
            // if (k == 1 && i >= P)
            // {
            //     if (s[i] == '0')
            //         counter[0]++;
            //     else
            //     {
            //         counter[0]++;
            //         counter[0]--;
            //     }
            //     continue;
            // }
            if (s[i] == '0')
            {
                counter[(i - P) % k]++;
            }
            else
            {
                counter[(i - P) % k]++;
                counter[(i - P) % k]--;
            }
        }
    }
    long long ans = INT_MAX;
    int z = P;
    while (z < n)
    {
        ans = min(ans, counter[(z - P) % k] * x + (z - P) * y);
        if (s[z] == '0')
        {
            counter[(z - P) % k]--;
        }
        z++;
    }
    // cout << counter[0] <<"\n";
    //  if (k == 1)
    //  {
    //      for (int i = P; i < n; i++)
    //      {
    //          ans = min(ans, counter[0] * x + (i - P) * y);
    //          if (s[i] == '0')
    //          {
    //              counter[0]--;
    //          }
    //      }
    //  }
    //  else
    //  {
    //      for (auto it = counter.begin(); it != counter.end(); it++)
    //      {
    //          ans = min(ans, it->second * x + it->first * y);
    //      }
    //  }
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

// #include <bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     int n, p, k;
//     cin >> n >> p >> k;
//     string s;
//     cin >> s;
//     int x, y;
//     cin >> x >> y;

//     int z = 0;
//     int ans = INT_MAX;
//     bool check = false;

//     while (z < n)
//     {
//         int cnt = 0;
//         for (int i = p - 1 + z; i < s.size(); i += k)
//         {
//             if (s[i] == '0')
//             {
//                 cnt++;
//             }
//             check = true;
//         }
//         if (check)
//             ans = min(ans, x * cnt + z * y);
//         check = false;
//         z++;
//     }
//     cout << ans << "\n";
// }

// int main()
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
