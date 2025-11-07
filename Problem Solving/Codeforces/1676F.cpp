#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    int x, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        mp[x]++;
        if (mp[x] == k)
        {
            cnt++;
        }
    }
    
    if (!cnt)
    {
        cout << -1 << "\n";
        return;
    }

    int mx = 0, l, r;

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second >= k)
        {
            int c = 0, val = it->first, L = it->first;
            for (auto i = it; i != mp.end(); i++)
            {
                if (i->first - val <= 1)
                {
                    val = i->first;
                }
                else
                {
                    break;
                }

                if (i->second >= k)
                {
                    it = i;
                    c++;
                    if (c > mx)
                    {
                        mx = c;
                        l = L;
                        r = i->first;
                    }
                }
                else
                {
                    break;
                }
            }
        }
    }
    cout << l << " " << r << "\n";
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

