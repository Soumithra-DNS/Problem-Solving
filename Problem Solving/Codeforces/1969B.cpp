#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    long long ans = 0, cnt = 0, preCnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        cnt = 0;
        if (s[i] == '1')
        {
            while (s[i] == '1')
            {
                cnt++;
                i++;
                if (i == s.size())
                {
                    cnt = 0;
                    preCnt = -1;
                }
            }
            ans += (cnt + preCnt + 1);
            preCnt += cnt;
        }
        else if (preCnt != 0)
        {
            ans += (cnt + preCnt + 1);
            preCnt += cnt;
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
