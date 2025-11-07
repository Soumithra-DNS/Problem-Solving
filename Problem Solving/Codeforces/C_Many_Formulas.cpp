#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s;
    cin >> s;

    int n = s.size();
    int total_sum = 0;

    for (int mask = 0; mask < (1 << (n - 1)); mask++)
    {
        string formula = "";
        int current_sum = 0, current_num = 0;

        for (int i = 0; i < n; i++)
        {
            current_num = current_num * 10 + (s[i] - '0');
            if (i == n - 1 || (mask & (1 << i)))
            {
                current_sum += current_num;
                current_num = 0;
            }
        }

        total_sum += current_sum;
    }

    cout << total_sum << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}
