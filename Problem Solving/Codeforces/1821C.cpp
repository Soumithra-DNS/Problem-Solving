#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin >> str;
    int n = str.size();
    map<char, int> mp;
    for (int i = 0; i < str.size(); i++)
    {
        mp[str[i]]++;
    }
    int mx = 0;
    char ch;
    for (auto it : mp)
    {
        if (it.second > mx)
        {
            mx = it.second;
        }
    }

    int mxx = INT_MAX;
    for (auto it : mp)
    {
        if (it.second == mx)
        {
            char ch = it.first;
            int l = 0, r, m = INT_MIN;
            //cout << ch << "\n";
            for (int i = 0; i < n; i++)
            {
                if (str[i] == ch)
                {
                    r = i;
                    if (l == 0 && m != 0)
                    {
                        m = max(m, r);
                    }
                    else
                        m = max(m, r - l - 1);
                    l = r;
                    //cout << m << "\n";
                }
            }
            m = max(m, n - l - 1);
            //cout << m << "\n";
            mxx = min(mxx, m);
        }
    }
    int cnt = 0;
    while(mxx){
        mxx = mxx / 2;
        cnt++;
    }
    cout << cnt << "\n";
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
