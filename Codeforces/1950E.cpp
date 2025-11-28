#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            pq.push(i);
            if (i * i != n)
            {
                pq.push(n / i);
            }
        }
    }

    while (!pq.empty())
    {
        map<string, int> mp;
        int l = 0;
        int r = pq.top();
        pq.pop();
        string prev = str.substr(l, r);
        bool notOk = false;
        while (l < n)
        {
            string s = str.substr(l, r);
            int cnt = 0;
            for (int i = 0; i < r && cnt < 2; i++)
            {
                if (s[i] != prev[i])
                    cnt++;
            }
            if (cnt == 2)
            {
                notOk = true;
            }
            mp[s]++;
            l += r;
        }
        if (notOk)
        {
            continue;
        }
        // cout << st.size() << "\n";
        if (mp.size() == 1)
        {
            cout << r << "\n";
            break;
        }
        else if (mp.size() == 2)
        {
            bool check = false;
            for (auto it : mp)
            {
                if (it.second == 1)
                {
                    check = true;
                }
            }
            if (check)
            {
                cout << r << "\n";
                break;
            }
        }
    }
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


